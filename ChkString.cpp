#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char*Str,char ch1)
{
	if(Str==NULL)
	{
		return -1;
	}

	while(*Str!='\0')
	{
	    if(*Str==ch1)
		{
		   return TRUE;
	       break;
	    }
	    //else
	    //{
	      // return FALSE;
		//}

		Str++;
	}
	
}

int main()
{
	char Arr[20];
	char ch='\0';
	BOOL bRet=0;

	printf("enter string\n");
	scanf("%[^'\n']s",Arr);

	printf("enter char");
	scanf("%c",&ch);

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
	 