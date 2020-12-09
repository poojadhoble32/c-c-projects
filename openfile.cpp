#include<stdio.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	char Name[30];
	int Fd=0;
	//int iRet=0;

	//printf("enter file name");
    //scanf("%s",&Name);

	Fd=open("demo.txt",O_RDONLY);

	//Fd=creat(Name);

	if(Fd==-1)
	{
		printf("unable to open file");
		return -1;
	}

	//iRet=read(Fd,Name,5);

	//if(iRet<0)
	//{
	//	printf("unable to read file");
	//	close(Fd);
	//	return -1;
	//}

	printf("file open successfully with Fd %d\n",Fd);

	close(Fd);

	return 0;
}

