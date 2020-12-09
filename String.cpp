#include<stdio.h>

int Reverse(char Str[])
{
	int iCnt=0;

	if(Str==NULL)
	{
	   printf("mem problem");
	}

	while(*Str!='\0')
	{
		if(*Str=='A')
		{
			iCnt++;
		}
        
		Str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;

	printf("enter string\n");
	scanf_s("%[^'\n']s",Arr);

	iRet=Reverse(Arr);

	printf("%d",iRet);

	return 0;
}