#include<stdio.h>

//////////////////////////////////////////////////////
// name :        Display
// i/p  :        int
// o/p  :        none
// description : print *
// author :      pooja
// date :        5/9/19
//////////////////////////////////////////////////////

void Pattern(int iNo)
{
	int iCnt=0;

	if(iNo<0)
	{
		iNo= -iNo;
	}

	while(iCnt<iNo)
	{
		printf(" \n $ *  ");
		iCnt++;
	}
}

//entry point function- main

int main()
{
	int iValue=0;

	printf("enter number\n");
	scanf("%d", &iValue);

	Pattern(iValue);

	return 0;

}
