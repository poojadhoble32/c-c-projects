#include<stdio.h>
#include<fcntl.h>
#include<io.h>

void CreatFile(char fName[])
{
	int fd=0,iRet=0;
	char String[10]="world";

	fd=creat(fName,O_CREAT);


	if(fd==-1)
	{
		printf("unable to creat file\n");
		return ;
	}

	printf("file created successfully with fd %d",fd);

	iRet=write(fd,String,10);

	if(iRet==-1)
	{
		printf("unable to write\n");
		close(fd);
		return;
	}

	printf("data written successfully in file");

	close(fd);

}

int main()
{
	char Name[20];
	char Str[10]="Hello";

	printf("enter file name");
	scanf("%s",Name);

	CreatFile(Name);

	return 0;
}