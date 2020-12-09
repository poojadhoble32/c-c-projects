#include<stdio.h>

int AddDigit(int iNo1)
{
	int iDigit=0,iSum=0;

	while(iNo1!=0)
	{
		iDigit=iNo1%10;

		iSum=iSum+iDigit;

	    iNo1=iNo1/10;
	}

	return iSum;
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	iRet=AddDigit(iValue);

	printf("digits addition is : %d\n",iRet);

	return 0;
}