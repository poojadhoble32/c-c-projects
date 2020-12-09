#include<stdio.h>

void DisplaySeries(int iNo1,int iNo2)
{
    if((iNo1%iNo2==0))
	{
		printf("factor");
	}
	else
	{
		printf("not factor");
	}
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("enter num\n");
	scanf("%d%d",&iValue1,&iValue2);

	DisplaySeries(iValue1,iValue2);

	return 0;
}