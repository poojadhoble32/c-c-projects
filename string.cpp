#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Palindrom(int*Str1)
{
	int*Start=NULL;
	int*End=NULL;

	if(Str1==NULL)
	{
		return FALSE;
	}

	Start=Str1;
	End=Str1;

	while(*End!='\0')
	{
		End++;
	}
	End--;

	while(Start<=End)
	{
		if(*Start!=*End)
		{
			break;
		}

		Start++;
		End--;
	}

	if(Start<End)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	int Str[20];
	BOOL iRet=FALSE;

	printf("enter string\n");
	scanf("%[^'\n']s",Str);

	iRet=Palindrom(Str);

	if(iRet==TRUE)
	{
		printf("string is palindrom\n");
	}
	else
	{
		printf("string is not palimdrom\n");
	}

	return 0;
}