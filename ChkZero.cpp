#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL ChkZero(int iNo1)
{
	int iDigit=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

    while(iNo1!=0)
	{
		iDigit=iNo1%10;
		if(iDigit==0)
		{
             return TRUE;
		}
		iNo1=iNo1/10;
	}


}

int main()
{ 
	int iValue1=0;
	BOOL bRet=FALSE;

	printf("enter  number\n");
	scanf("%d",&iValue1);

	bRet=ChkZero(iValue1);

	if(bRet==TRUE)
	{
		printf("it contains zero");
	}
	else
	{
		printf("there is no zero");
	}

	

	return 0;
}