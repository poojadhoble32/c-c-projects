#include<stdio.h>

int Factorial(int iNo)
{
	int i=0,Fact1=1;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=iNo;i>=1;i--)
	{
		Fact1=Fact1*i;
	}

	return Fact1;
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter number \n");
	scanf("\n%d",&iValue);

	iRet=Factorial(iValue);

	printf("factorial is %d\n",iRet);
	
	return 0;

}
