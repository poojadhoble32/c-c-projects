#include<sys/types.h> 
#include<sys/stat.h> 
#include<iostream> 
#include<string.h> 
#include<assert.h> 
#include<windows.h> 
#include<tlhelp32.h> 
#include<stdio.h> 
#include<io.h>

using namespace std;

//
// This is the structure of LogFile
//

typedef struct LogFile
{
     char ProcessName[100]; 
	 unsigned int pid; 
	 unsigned int ppid; 
	 unsigned int thread_cnt;
}LOGFILE;

//////////////////////////////////////////////////////////////////
//Class Name	: ThreadInfo
//Description : This class represent Threads Information.
/////////////////////////////////////////////////////////////////

class ThreadInfo
{
private: 
	DWORD PID;
	HANDLE hThreadSnap; 
	THREADENTRY32 te32;

public:
	ThreadInfo(DWORD); 
	BOOL ThreadsDisplay();
};
 
//////////////////////////////////////////////////////////////////
//Class Name	: DLLInfo
//Description : This class represent DLL information.
/////////////////////////////////////////////////////////////////

class DLLInfo
{
private: 
	DWORD PID;
	MODULEENTRY32 me32;
	HANDLE hProcessSnap; 
public:
	DLLInfo(DWORD);
	BOOL DependentDLLDisplay();
};

//////////////////////////////////////////////////////////////////
//Class Name	: ProcessInfo
//Description : This class represents information about Processes.
/////////////////////////////////////////////////////////////////

class ProcessInfo
{
private: 
	DWORD PID;
	DLLInfo *pdobj; 
	ThreadInfo *ptobj; 
	HANDLE hProcessSnap; 
	PROCESSENTRY32 pe32;
public:
	ProcessInfo();
	BOOL ProcessDisplay(char*); 
	BOOL ProcessLog();
	BOOL ReadLog(DWORD, DWORD, DWORD, DWORD);
	BOOL ProcessSearch(char*); 
	BOOL KillProcess(char*);
};

////////////////////////////////////////////////////////////////////
// Function Name	: ThreadInfo
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: DWORD no
// Description	: This is the constructor of ThreadInfo class.
// Returns	: NONE
////////////////////////////////////////////////////////////////////


ThreadInfo::ThreadInfo(DWORD no)
{
	PID=no;
	hThreadSnap=CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD,PID);

	if(hThreadSnap==INVALID_HANDLE_VALUE)
	{
		cout<<"Unable to create the snapshot of current thread pool"<<endl; 
		return ;
	}
	te32.dwSize=sizeof(THREADENTRY32);
}

////////////////////////////////////////////////////////////////////
// Function Name	: ThreadInfo
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: NONE
// Description	: This function displays all threads.
// Returns	: BOOLEAN
//	If the function succeeds, the return value is TRUE.
//	If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////


BOOL ThreadInfo::ThreadsDisplay()
{
 
	if(!Thread32First(hThreadSnap,&te32))
	{
		cout<<"Error: In Getting the First Thread"<<endl; 
		CloseHandle(hThreadSnap);
		return FALSE;
	}

	cout<<endl<<"THREAD OF THIS PROCESS:"<<endl;
	do
	{
		if(te32.th32OwnerProcessID==PID)
		{
			cout<<"\tTHREAD ID:"<<te32.th32ThreadID<<endl;
		}
	}while(Thread32Next(hThreadSnap, &te32));

	CloseHandle(hThreadSnap); 
	return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name	: DLLInfo
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: DWORD no
// Description	: This is the constructor of DLLInfo class.
// Returns	: NONE
////////////////////////////////////////////////////////////////////

DLLInfo::DLLInfo(DWORD no)
{
	PID=no;
	hProcessSnap=CreateToolhelp32Snapshot(TH32CS_SNAPMODULE,PID);

	if(hProcessSnap==INVALID_HANDLE_VALUE)
	{
		cout<<"Error: Unable to create the snapshot of current thread pool"<<endl; 
		return ;
	}
	me32.dwSize=sizeof(MODULEENTRY32);
}
 


////////////////////////////////////////////////////////////////////
// Function Name	: DependentDLLDisplay
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: NONE
// Description	: This function shows DLL information.
// Returns	: BOOLEAN
//	If the function succeeds, the return value is TRUE.
//	If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////


BOOL DLLInfo::DependentDLLDisplay()
{
	char arr[200];

	if(!Module32First(hProcessSnap,&me32))
	{
		cout<<"FAILED to get DLL Information"<<endl; 
		CloseHandle(hProcessSnap);
		return FALSE;
	}

	cout<<"DEPENDENT DLL OF THIS PROCESS"<<endl;
	do
	{
		wcstombs_s(NULL,arr,200,me32.szModule,200); 
		cout<<arr<<endl;
	}while(Module32Next(hProcessSnap, &me32));

	CloseHandle(hProcessSnap); 
	return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name	: ProcessInfo
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: NONE
// Description	: This is the constructor of ProcessInfo class.
// Returns	: NONE
////////////////////////////////////////////////////////////////////
 

ProcessInfo::ProcessInfo()
{
	ptobj=NULL; pdobj=NULL;

	hProcessSnap=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0); 
	if(hProcessSnap==INVALID_HANDLE_VALUE)
	{
		cout<<"Error: Unable to create the snapshot of running processes"<<endl; 
		return;
	}
	pe32.dwSize=sizeof(PROCESSENTRY32);
}

////////////////////////////////////////////////////////////////////
// Function Name	: ProcessLog
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: NONE
// Description	: This function creates a log file of all running processes.
// Returns	: BOOLEAN
//	If the function succeeds, the return value is TRUE.
//	If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////


BOOL ProcessInfo::ProcessLog()
{
	char* month[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};

	char FileName[50], arr[512]; 
	int ret=0, fd=0, Count=0; SYSTEMTIME lt;
	LOGFILE fobj; FILE *fp;
	GetLocalTime(&lt);
 
	sprintf_s(FileName,"E://ProcMonLog %02d_%02d_%02d%s.txt",lt.wHour,lt.wMinute,lt.wDay,month[lt.wMonth-1]);

	fp=fopen(FileName,"wb"); 
	if(fp==NULL)
	{
		cout<<"Unable to create log file"<<endl; 
		return FALSE;
	}
	else
	{
		cout<<"Log file successfully gets created as: "<<FileName<<endl; 
		cout<<"Time of log file creation is->"<<lt.wHour<<":"<<lt.wMinute<<":"<<lt.wDay<<"th"<<month[lt.wMonth-1]<<endl;
	}

	if(!Process32First(hProcessSnap,&pe32))
	{
		cout<<"Error:In finding the first process."<<endl; 
		CloseHandle(hProcessSnap);
		return FALSE;
	}
	do
	{
		wcstombs_s(NULL,arr,200,pe32.szExeFile,200); 
		strcpy_s(fobj.ProcessName,arr); 
		fobj.pid=pe32.th32ProcessID; 
		fobj.ppid=pe32.th32ParentProcessID; 
		fobj.thread_cnt=pe32.cntThreads; 
		fwrite(&fobj,sizeof(fobj),1,fp);
	}while(Process32Next(hProcessSnap,&pe32));

	CloseHandle(hProcessSnap); fclose(fp);

	return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name	: ProcessDisplay
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: char* option
// Description	: This function shows all running processes.
 
// Returns	: BOOLEAN
//	If the function succeeds, the return value is TRUE.
//	If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

BOOL ProcessInfo::ProcessDisplay(char* option)
{
	char arr[200];

	if(!Process32First(hProcessSnap,&pe32))
	{
		cout<<"Error: In Finding the first process."<<endl; 
		CloseHandle(hProcessSnap);
		return FALSE;
	}
	do
	{
		cout<<endl<<"	";
		wcstombs_s(NULL,arr,200,pe32.szExeFile,200); 
		cout<<endl<<"PROCESS NAME: "<<arr; 
		cout<<endl<<"PID:"<<pe32.th32ProcessID; 
		cout<<endl<<"Parent PID: "<<pe32.th32ParentProcessID; 
		cout<<endl<<"No of Thread: "<<pe32.cntThreads;
		
		if((_stricmp(option,"-a")==0)||(_stricmp(option,"-d")==0)||(_stricmp(option,"-t")==0))
		{
			if((_stricmp(option,"-t")==0)||(_stricmp(option,"-a")==0))
			{
				ptobj=new ThreadInfo(pe32.th32ProcessID); 
				ptobj->ThreadsDisplay();
				delete ptobj;
			}
			if((_stricmp(option,"-d")==0)||(_stricmp(option,"-a")==0))
			{
				pdobj=new DLLInfo(pe32.th32ProcessID); 
				pdobj->DependentDLLDisplay();
				delete pdobj;
			}
		}
		cout<<endl<<"	";
	}while(Process32Next(hProcessSnap, &pe32)); 
	
	CloseHandle(hProcessSnap);
	return TRUE;
}

////////////////////////////////////////////////////////////////////
// Function Name	: ReadLog
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble.
// Parameters	: DWORD hr, DWORD min, DWORD date, DWORD month
// Description	: This function reads a log file and open it.
// Returns	: BOOLEAN
//	If the function succeeds, the return value is TRUE.
//	If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

BOOL ProcessInfo::ReadLog(DWORD hr, DWORD min,DWORD date,DWORD month)
{
	char FileName[50]; 
	char*montharr[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
	int ret=0, count=0; 
	LOGFILE fobj;
	FILE *fp;
	sprintf_s(FileName,"E://ProcMonLog %02d_%02d_%02d %s.txt",hr,min,date,montharr[month-1]); 
	fp=fopen(FileName,"rb");
	if(fp==NULL)
	{
		cout<<"Error: Unable to open log file named as:"<<FileName<<endl; 
		return FALSE;
	}
	while((ret=fread(&fobj,1,sizeof(fobj),fp))!=0)
	{
		cout<<"	"<<endl;
		cout<<"Process Name :"<<fobj.ProcessName<<endl; 
		cout<<"PID of current process:"<<fobj.pid<<endl; 
		cout<<"Parent process PID:"<<fobj.ppid<<endl; 
		cout<<"Thread count of process:"<<fobj.thread_cnt<<endl;
	}
	
	return TRUE;
}
 


////////////////////////////////////////////////////////////////////
// Function Name	: ProcessSearch
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: char* name
// Description	: This function search a specific process.
// Returns	: BOOLEAN
//	If the function succeeds, the return value is TRUE.
//	If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

BOOL ProcessInfo::ProcessSearch(char*name)
{
	char arr[200]; BOOL Flag=FALSE;
	
	if(!Process32First(hProcessSnap,&pe32))
	{
		CloseHandle(hProcessSnap); 
		return FALSE;
	}
	
	do
	{
		wcstombs_s(NULL,arr,200,pe32.szExeFile,200); 
		if(_stricmp(arr,name)==0)
		{
			cout<<endl<<"PROCESS NAME:"<<arr; 
			cout<<endl<<"PID:"<<pe32.th32ProcessID; 
			cout<<endl<<"Parent PID:"<<pe32.th32ParentProcessID; 
			cout<<endl<<"No of Thread:"<<pe32.cntThreads; 
			Flag=TRUE;
			break;
		}
	}while(Process32Next(hProcessSnap,&pe32)); 
	
	CloseHandle(hProcessSnap);
	
	return Flag;
}
 
////////////////////////////////////////////////////////////////////
// Function Name	: KillProcess
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: char *name
// Description	: This function kills(close) a specific process.
// Returns	: BOOLEAN
//	If the function succeeds, the return value is TRUE.
//	If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

BOOL ProcessInfo::KillProcess(char*name)
{
	char arr[200]; 
	int pid=-1; 
	BOOL bret;
	HANDLE hProcess;
	
	if(!Process32First(hProcessSnap,&pe32))
	{
		CloseHandle(hProcessSnap); 
		return FALSE;
	}
	do
	{
		wcstombs_s(NULL,arr,200,pe32.szExeFile,200); 
		if(_stricmp(arr,name)==0)
		{
			pid=pe32.th32ProcessID; 
			break;
		}
	}while(Process32Next(hProcessSnap,&pe32));
	
	CloseHandle(hProcessSnap); if(pid==-1)
	{
		cout<<"ERROR: There is no such process"<<endl; 
		return FALSE;
	}
	
	hProcess=OpenProcess(PROCESS_TERMINATE,FALSE,pid); 
	if(hProcess==NULL)
	{
		cout<<"ERROR:There is no access to terminate"<<endl; 
		return FALSE;
	}
	bret=TerminateProcess(hProcess,0); 
	
	if(bret==FALSE)
	{
		cout<<"ERROR: Unable to terminate process"; 
		return FALSE;
	}
}

////////////////////////////////////////////////////////////////////
// Function Name	: HardwareInfo
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: NONE
// Description	: This function shows the hardware information.
// Returns	: BOOLEAN
//	If the function succeeds, the return value is TRUE.
//	If the function fails, the return value is FALSE.
////////////////////////////////////////////////////////////////////

BOOL HardwareInfo()
{
	SYSTEM_INFO siSysInfo;
	GetSystemInfo(&siSysInfo); 
	cout<<endl<<"HARDWARE INFO"<<endl;
	cout<<"OEM ID		:"<<siSysInfo.dwOemId<<endl; 
	cout<<"Number of processors		:"<<siSysInfo.dwNumberOfProcessors<<endl; 
	cout<<"Page size	:"<<siSysInfo.dwPageSize<<endl;
	cout<<"Processor type	:"<<siSysInfo.dwProcessorType<<endl; 
	cout<<"Minimum application address:"<<siSysInfo.lpMinimumApplicationAddress<<endl; 
	cout<<"Maximum application address:"<<siSysInfo.lpMaximumApplicationAddress<<endl;
	cout<<"Active Processor mask	:"<<siSysInfo.dwActiveProcessorMask<<endl;
	
	return TRUE;
}
 
////////////////////////////////////////////////////////////////////
// Function Name	: DisplayHelp
// Function Date	: 13/12/2019
// Function Author	: Pooja Dhoble
// Parameters	: NONE
// Description	: This function Display the commands of our program.
// Returns	: void
////////////////////////////////////////////////////////////////////

void DisplayHelp()
{
	cout<<endl<<"Developed by Suraj Kashinath Dasarwad"<<endl<<endl; 
	cout<<"ps	:Display all information of process"<<endl;
	cout<<"ps -t	:Display all information about threads"<<endl; 
	cout<<"ps -d		:Display all information about DLL"<<endl; 
	cout<<"clear		:Clear the contents on condole"<<endl;
	cout<<"log	:Creates log of current running process on C drive"<<endl; 
	cout<<"readlog :Display the information from specified log file"<<endl; 
	cout<<"sysinfo :Display the current hardware configuration"<<endl;
	cout<<"search	:Search and display information of specific running process"<<endl; 
	cout<<"kill	:kill the specific running process"<<endl;
	cout<<"exit	:Terminate Marvellous ProcMon"<<endl;
}

///////////////////////////////////////////////////////////////
//Function Name	: Entry Point Function
//Function Date	: 13/12/2019
//Function Author	: Pooja Dhoble
//Description	: We call the required functions to perform specific operations.
//	And build a logic to implement our program.
////////////////////////////////////////////////////////////////

int main(int argc,char*argv[])
{
	BOOL bret;
	char *ptr=NULL; 
	ProcessInfo *ppobj=NULL;
	char command[4][80],str[80]; 
	int count,min,date,month,hr;
	
	while(1)
	{
		fflush(stdin); 
		strcpy_s(str,"");
		
		cout<<endl<<"Marvellous ProcMon:>"; 
		fgets(str,80,stdin);
		count=sscanf(str,"%s %s %s %s",command[0], command[1], command[2], command[3]); 
		if(count==1)
		{
			if(_stricmp(command[0],"ps")==0)
			{
				ppobj=new ProcessInfo(); 
				bret=ppobj->ProcessDisplay("-a");
				if(bret==FALSE) cout<<"ERROR:Unable to display process"<<endl; 
				delete ppobj;
			}
			else if(_stricmp(command[0],"log")==0)
			{
				ppobj=new ProcessInfo(); 
				bret=ppobj->ProcessLog();
				
				if(bret==FALSE)
					cout<<"ERROR:Unable to create log file"<<endl;
				delete ppobj;
			}
			else if(_stricmp(command[0],"sysinfo")==0)
			{
				bret=HardwareInfo();
				
				if(bret==FALSE)
					cout<<"ERROR:Unable to create log file"<<endl;
			}
			else if(_stricmp(command[0],"readlog")==0)
			{
				ProcessInfo *ppobj; 
				ppobj=new ProcessInfo();
				
				cout<<"Enter log file details as :"<<endl;
				cout<<"Hour	:";
				cin>>hr; 
				cout<<"Minute :";
				cin>>min; 
				cout<<"Date	:";
				cin>>date; 
				cout<<"Month		:";
				cin>>month;
				
				bret=ppobj->ReadLog(hr,min,date,month);
				if(bret==FALSE)
					cout<<"ERROR:Unable to read specified log file"<<endl;
				delete ppobj;
			}
			else if(_stricmp(command[0],"clear")==0)
			{
				system("cls");
				continue;
			}
			else if(_stricmp(command[0],"help")==0)
			{
				DisplayHelp(); 
				continue;
			}
			else if(_stricmp(command[0],"exit")==0)
			{
				cout<<endl<<"Terminating the Marvellous ProcMon"<<endl; 
				break;
			}
			else
			{
				cout<<endl<<"ERROR:Command not found!!"<<endl; 
				continue;
			}
		}
		else if(count==2)
		{
			if(_stricmp(command[0],"ps")==0)
			{
				ppobj=new ProcessInfo();
				bret=ppobj->ProcessDisplay(command[1]);
				if(bret==FALSE)
					cout<<"ERROR:Unable to display process information"<<endl;
				delete ppobj;
			}
			else if(_stricmp(command[0],"search")==0)
			{
				ppobj=new ProcessInfo();
 
				bret=ppobj->ProcessSearch(command[1]); 
				if(bret==FALSE)
					cout<<"ERROR: There is no such process2"<<endl; 
				delete ppobj;
				continue;
			}
			else if(_stricmp(command[0],"kill") == 0)
			{
				ppobj = new ProcessInfo();
				bret = ppobj->KillProcess(command[1]);

				if(bret == FALSE)
					cout<<"ERROR : There is no such process"<<endl; 
				else
					cout<<command[1]<<" Terminated succesfully"<<endl; 
				delete ppobj;
				continue;
			}
		}
		else
		{
			cout<<endl<<"ERROR:Command not found!!!"<<endl; 
			continue;
		}
}

return 0;
}
 
