/*
#include<stdio.h>

void DisplaySeries(int iNo1)
{


	if(iNo1<10)
	{
		printf("hello");
	}
	else
	{
		printf("demo");
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
*/

#include<stdio.h>

void DisplaySeries(int iNo1,int iNo2)
{
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	
    for(int i=iNo2;i>0;i--)
	{
		printf("%d\n",iNo1);
	}
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("enter num to display\n");
	scanf("%d",&iValue1);

	printf("enter count number\n");
	scanf("%d",&iValue2);

	DisplaySeries(iValue1,iValue2);

	return 0;
}