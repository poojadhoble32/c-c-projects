#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo1,int iNo2)
{
	if(iNo1==iNo2)
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
	int iValue1=0,iValue2=0;
	BOOL bRet=FALSE;

	printf("enter numbr\n");
	scanf("%d%d",&iValue1,&iValue2);

	bRet=ChkGreater(iValue1,iValue2);

	if(bRet==TRUE)
	{
		printf("numbers are equal");
	}
	else
	{
		printf("numbers are not equal");
	}

	return 0;
}

	