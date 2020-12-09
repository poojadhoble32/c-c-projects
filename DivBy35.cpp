#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DivBy35(int fNo1)
{
	if(((fNo1%3)==0)&&((fNo1%5)==0))
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
	int fValue1=0.0;
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
