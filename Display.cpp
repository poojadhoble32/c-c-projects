#include<stdio.h>

void DisplaySeries(int iNo1)
{
	int i=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

	while(i<iNo1)
	{
		printf("$");
		i++;
	}
}

int main()
{
	int iValue1=0;

	printf("enter num\n");
	scanf("%d",&iValue1);

	DisplaySeries(iValue1);

	return 0;
}