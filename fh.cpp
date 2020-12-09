#include<stdio.h>
#include<fcntl.h>
#include<io.h>

void CountChar(char fName[],int size)
{
	int fd=0,iRet=0,i=0,iCnt=0;
	char Arr[20];

    fd=open(fName,O_RDONLY);

	if(fd==-1)
	{
		printf("file unable to open\n");
		return;
	}

	printf("file is open with fd %d\n",fd);

	iRet=read(fd,Arr,size);

	printf("read %d",iRet);
	
    //while(iRet>0)
	//{
		//	if(Arr[i]==' ')
			//{
			//	iCnt++;
			//}
			//printf("data from file is %s",Arr);
			//i++;	
			//iRet--;
    //}
	
	

	printf("data from file is %s\n",Arr);

	close(fd);
	//return iCnt;
}

int main()
{
	char Name[20];
	//char cValue='\0';
	int iRet=0;

	printf("enter file name\n");
	scanf("%[^'\n']s",Name);

	printf("enter  count\n");
	scanf("%d",&iRet);

	CountChar(Name,iRet);

	//printf("frequency of char is %d\n",iRet);

	return 0;
}