#include<stdio.h>
#include<fcntl.h>
#include<io.h>
#define BLOCKSIZE 10

int DisplayData(char fName[])
{
	int fd=0,iRet=0;
	char Arr[BLOCKSIZE];

	fd=open(fName,O_RDONLY);

	if(fd==-1)
	{
		printf("file unable to open\n");
		return -1;
	}

	printf("file is open with fd %d\n",fd);

	lseek(fd,0,SEEK_END);

	iRet=tell(fd);

	//iRet=read(fd,Arr,15);

	//if(iRet<0)
	//{
	//	printf("unable to read\n");
	//	close(fd);
	//	return;
    //}

	//printf("data from file is %s\n",Arr);

	close(fd);

	return iRet;
}

int main()
{
	char Name[20];
	int iRet=0;

	printf("enter file name\n");
	scanf("%s",Name);

	iRet=DisplayData(Name);

	printf("size of file is %d byte",iRet);

	return 0;
}

