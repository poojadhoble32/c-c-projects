/*
#include<stdio.h>

typedef unsigned int UINT; //unsigned int uses full 32 bits while int uses only 16 bits 

void Display(UINT iNo)
{
	UINT iDigit=0;

	while(iNo>0)
	{
		iDigit=iNo%2;

		printf("%d",iDigit);

		iNo=iNo/2;
	}
}

int main()
{
	UINT iValue=0;

	printf("enter value:\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}
*/

#include<stdio.h>

//typedef unsigned int UINT;

void Display(int iNo)
{
	int iDigit=0;

	while(iNo>0)
	{
		iDigit=iNo%2;

		printf("%d",iDigit);

		iNo=iNo/2;
	}
}

int main()
{
	int iValue=0;

	printf("enter value:\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}