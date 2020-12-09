#include<stdio.h>

int EvenOddDiff(int iNo)
{
	int i=0,iMult=1,iMult1=1,iFinal=0;

	if(iNo<=0)
	{
		iNo=-iNo;
	}

	
	for(i=1;i<=iNo;i++)
	{
		if(((i%2)==0))
		{
			iMult=iMult*i;
		}
	}

	for(i=1;i<=iNo;i++)
	{
		if(((i%2)!=0))
		{
			iMult1=iMult1*i;
		}
	}

	iFinal=iMult-iMult1;

	return iFinal;
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter number \n");
	scanf("\n%d",&iValue);

	iRet=EvenOddDiff(iValue);

	printf("even factorial of number is \n%d\n",iRet);
	return 0;

}
