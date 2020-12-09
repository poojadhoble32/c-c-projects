//printeven.c

/////////////////////////////////////////////////////////////////////
// accept one no and print that number of even numbers on screen
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt=0,iCntEven=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

		for(iCntEven=1;;iCntEven++)
		{
			 if((iCntEven%2)==0)
			 {
			      printf("number is even %d\n",iCntEven);
				  iCnt++;
			 }
			 if(iCnt==iNo)
			 {
				break;
			 }
		}
}

int main()
{
	int iValue=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;
}



