#include<stdio.h>

int Count(int iNo1)
{
	int iDigit=0,iCnt=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

    while(iNo1!=0)
	{
		iDigit=iNo1%10;
		if(iDigit<6)    
		{ 
			iCnt++;
		}
		
		iNo1=iNo1/10;
	}

	return iCnt;
}

int main()
{ 
	int iValue1=0,iRet=0;

	printf("enter  number\n");
	scanf("%d",&iValue1);

	iRet=Count(iValue1);

	printf("%d",iRet);

	

	return 0;
}