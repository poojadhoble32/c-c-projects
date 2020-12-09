#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char Str[],char ch)
{
	if(Str==NULL)
	{
		printf("mem prb");
		return -1;
	}

	while(*Str!='\0')
	{
	    if(*Str==ch)
		{
		   return TRUE;
	       break;
	    }
	    Str++;
	}
	
}

int main()
{
	char Arr[20];
	char ch;
	BOOL bRet=FALSE;

	printf("enter string\n");
	scanf("%[^'\n']s",Arr);

	printf("enter char\n");
	scanf(" %c",&ch);

	bRet=ChkDigit(Arr,ch);

    if(bRet==TRUE)
	{
		printf("  present\n");
	}
	else
	{
		printf(" not present\n");
	}

	return 0;
}
	 