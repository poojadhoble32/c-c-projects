#include<stdio.h>

void Factors(int iNo1)
{
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

	for(int i=1;i<=iNo1/2;i++)
	{
		if(iNo1%i==0)
		{
			printf("%d\n",i);
		}
	}
}

int main()
{
	int iValue1=0;

	printf("accept number from user : ");
	scanf("%d",&iValue1);

	Factors(iValue1);

	return 0;
}