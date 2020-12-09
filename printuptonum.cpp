#include<stdio.h>


void Display(int iNo)
{
	int iCnt=0;

	if(iNo<0)
	{
		iNo= -iNo;
	}

	for(iCnt=iNo;((iCnt<=iNo)&&(iCnt>=(-iNo)));iCnt--)
	{
		
		printf("%d\n",iCnt);
		
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
