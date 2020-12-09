#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
	if(iNo>=100)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;

	printf("enter numbr\n");
	scanf("%d",&iValue);

	bRet=ChkGreater(iValue);

	if(bRet==TRUE)
	{
		printf("GREATER greater number than 100");
	}
	else
	{
		printf("smaller number than 100");
	}

	return 0;
}

	