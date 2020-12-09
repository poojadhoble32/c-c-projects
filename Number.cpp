#include<stdio.h>

void ChkGreater(int iNo)
{
	if(iNo<=50)
	{
		printf("number is small\n");
	}
	else if((iNo>50)&&(iNo<=100))
	{
		printf("number is medium\n");
	}
	else
	{
		printf("number is large\n");
	}
}

int main()
{
	int iValue=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	ChkGreater(iValue);

	return 0;
}

	