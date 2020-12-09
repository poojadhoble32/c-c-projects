//billdiscount.c

//accept bill price and apply discount and return remainig value

#include<stdio.h>

int SchoolFees(int iStandard)
{
	int iFees=0;

	if(iStandard==1)
	{
       iFees=8900;

	   return iFees;
	}
	else if(iStandard==2)
   {
		iFees=12790;

		 return iFees;
	}
	else if(iStandard==3)
	{
		iFees=21000;

		 return iFees;
	}
	else if(iStandard==4)
	{
		iFees=23450;

        return iFees;
	}
	else
	{
		printf("wrong input\n");
	}
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter  standard\n");
	scanf("%d",&iValue);

	iRet=SchoolFees(iValue);

	printf("For this standard fees are \n%d\n",iRet);

	return 0;
}
