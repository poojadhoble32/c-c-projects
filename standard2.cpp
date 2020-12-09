//schoolstandard.c

//accept standard and display fees

#include<stdio.h>

void SchoolFees(int iStandard)
{
	if(iStandard==1)
	{
       printf("fees are 8900");
	}
	else if(iStandard==2)
   {
		printf("Fees are 12790");
	}
	else if(iStandard==3)
	{
		printf("Fees are 21000");
	}
	else if(iStandard==4)
	{
		printf("Fees are 23450");
	}
	else
	{
		printf("wrong input\n");
	}
}

int main()
{
	int iValue=0;

	printf("enter  standard\n");
	scanf("%d",&iValue);

	SchoolFees(iValue);

	
	return 0;
}
