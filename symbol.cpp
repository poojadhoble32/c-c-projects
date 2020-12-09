#include<stdio.h>

void Display(int iNo)
{
	int iCnt=1,iCnt1=1;

	if(iNo<0)
	{
		iNo= -iNo;
	}

	while(iCnt<=iNo)
	{
		printf(" \n * ");
		
		iCnt++;
		
	}
	
	while(iCnt1<=iNo)
	{
		printf(" \n # ");
		
		iCnt1++;
	}
}

//entry point function- main

int main()
{
	int iValue=0;

	printf("enter number\n");
	scanf("%d", &iValue);

	Display(iValue);

	return 0;

}
