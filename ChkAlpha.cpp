#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char*Str)
{
	if(Str==NULL)
	{
		return -1;
	}

	while(*Str!='\0')
	{
	    if((*Str=='a')||(*Str=='e')||(*Str=='i')||(*Str=='o')||(*Str=='u')||(*Str=='A')||(*Str=='E')||(*Str=='I')||(*Str=='O')||(*Str=='U'))
	    {
		   return TRUE;
	    
	    }
	    else
	    {
	       return FALSE;
		}

		Str++;
	}
	
}

int main()
{
	char Arr[20];
	BOOL bRet=FALSE;

	printf("enter string\n");
	scanf("%[^'\n']s",Arr);

	bRet=ChkDigit(Arr);
    if(bRet==TRUE)
	{
		printf(" vowels are present");
	}
	else
	{
		printf("vowels are not present");
	}

	return 0;
}
	 