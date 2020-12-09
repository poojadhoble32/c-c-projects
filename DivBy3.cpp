#include<stdio.h>

void DivBy3(int iNo1)
{
	if((iNo1%3)==0)
	{
		printf("number is divisible by 3");
	}
	else
	{
		printf("number is not divisible by 3");
	}

}

int main()
{
	int iValue1=0;

	printf("enter number : ");
	scanf("%d",&iValue1);

	DivBy3(iValue1);

	return 0;
}