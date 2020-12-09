//prime number

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Prime(int iNo)
{
	int iCnt=0;

	if((iNo==1)||(iNo==0))
	{
		return TRUE;
	}

	for(iCnt=2;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			break;
		}
	}

	if(iCnt==((iNo/2)+1))
	{
		return TRUE;
	}
}

int main()
{
	int iValue=0;
	BOOL iRet=FALSE;

	printf("enter number\n");
    scanf("%d",&iValue);

	iRet=Prime(iValue);
	
	if(iRet==TRUE)
	{
		printf("number is prime\n");
	}
	else
	{
		printf("number is not prime\n");
	}

	return 0;
}

