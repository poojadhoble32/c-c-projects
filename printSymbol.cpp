//print.c

//////////////////////////////////////////////////////
//accept one number & print that number of * on screen
//////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////
// name :        Display
// i/p  :        int
// o/p  :        none
// description : print *
// author :      pooja
// date :        5/9/19
//////////////////////////////////////////////////////

void Display(int iNo)
{
	int iCnt=0;

	if(iNo<0)
	{
		iNo= -iNo;
	}

	while(iCnt<iNo)
	{
		printf(" \n * ");
		iCnt++;
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
