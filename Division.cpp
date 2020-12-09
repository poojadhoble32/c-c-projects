#include<stdio.h>
#define ERROR -1

int Division(int iNo1,int iNo2)
{
	int iAns=0;

	if(iNo2==0)
	{
		return ERROR;
	}

	iAns=iNo1/iNo2;

	return iAns;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;

	printf("enter two values :");
	scanf("%d%d",&iValue1,&iValue2);

	iRet=Division(iValue1,iValue2);

	printf("%d",iRet);

	return 0;
}

