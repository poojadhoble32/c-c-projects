#include<stdio.h>

int Count2(int iNo1)
{
	int iDigit=0,iCnt=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

    while(iNo1!=0)
	{
		iDigit=iNo1%10;
		if(iDigit==2)    
	    //if(iDigit==4)  
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

	iRet=Count2(iValue1);

	printf("%d",iRet);

	

	return 0;
}