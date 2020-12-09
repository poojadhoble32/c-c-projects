#include<stdio.h>

int CountChar(char*str,char ch)
{
	int iCnt=0;

	if(str==NULL);
	{
		printf("unable to allocate memory\n");
		return -1;
	}

	while(*str!='\0')
	{
		if(*str=='ch')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt; 
}

int main()
{
	char Arr[10];
	char ch='\0';
	int iRet=0;

	printf("enter string\n");
	scanf("%[^'\n']s",&Arr);

	printf("enter char\n");
	scanf(" %c",&ch);

	iRet=CountChar(Arr,ch);

	printf("%d",iRet);

	return 0;
}

