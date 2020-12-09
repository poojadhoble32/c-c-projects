#include<stdio.h>

int CountEvenDigit(int iNo1)
{
	int iDigit=0,iEven=0,iOdd=0,iDif=0,Esum=0,Osum=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

    while(iNo1!=0)
	{
		iDigit=iNo1%10;
		if((iDigit%2)!=0)     
		{ 
			iOdd++;
			Osum=Osum+iDigit;
		}
		else if((iDigit%2)==0)     
		{ 
			iEven++;
			Esum=Esum+iDigit;
		}

		iDif=Esum-Osum;
		
		iNo1=iNo1/10;
	}

	return iDif;
}

int main()
{ 
	int iValue1=0,iRet=0;

	printf("enter  number\n");
	scanf("%d",&iValue1);

	iRet=CountEvenDigit(iValue1);

	printf("%d",iRet);

	

	return 0;
}