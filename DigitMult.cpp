#include<stdio.h>

int OddDigitMult(int iNo1)
{
	int iMult=0,iDigit=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

	while(iNo1!=0)
	{
		iDigit=iNo1%10;
		{
			if(iMult==0)
			{
				iMult=1;
			}
			
			iMult=iMult*iDigit;
		}
		
		iNo1=iNo1/10;
	}

	return iMult;
}

int main()
{ 
	int iValue1=0,iRet=0;

	printf("enter  number\n");
	scanf("%d",&iValue1);

	iRet=OddDigitMult(iValue1);

	printf("multiplication is \n %d",iRet);

	return 0;
}