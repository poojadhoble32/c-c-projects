#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DivBy35(float fNo1)
{
	int iAns=0,iAns1=3;

	iAns=fmod(fNo1,iAns1);

	if(iAns==0)
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
	float fValue1=0.0;
	BOOL bRet=FALSE;

	printf("enter value : ");
	scanf("%d",&fValue1);

	bRet=DivBy35(fValue1);

	if(bRet==TRUE)
	{
		printf("number is divisible by 3 & 5\n");
	}
	else
	{
		printf("number is not divisible by 3 & 5\n");
	}

	return 0;
}
