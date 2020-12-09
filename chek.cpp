#include<stdio.h>

int chek(int no)
{
	if((no>=0)||(no<=9))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("enter value");
	scanf("%d",&iValue);

	iRet=chek(iValue);

	if(iRet==1)
	{
		printf("it is digit");
	}
	else
	{
		printf("it is not digit");
	}

	return 0;
}