#include<stdio.h>

int OddNumMul(int iNo)
{
	int i=0,iMult=1;

	if(iNo<=0)
	{
		iNo=-iNo;
	}

	for(i=1;i<=iNo;i++)
	{
		if(((i%2)!=0))
		{
			iMult=iMult*i;
		}
	}

	return iMult;
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter number \n");
	scanf("\n%d",&iValue);

	iRet=OddNumMul(iValue);

	printf("even factorial of number is \n%d\n",iRet);
	return 0;

}
