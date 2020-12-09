//billdiscount.c

//accept bill price and apply discount and return remainig value

#include<stdio.h>

float CalculateBill(int iAmount)
{
	float Discount=0.0;

	if(iAmount<0)
	{
		iAmount=-iAmount;
	}
	

	if(iAmount<=500)
	{
       Discount=(iAmount-((iAmount*0)/100));

	   return Discount;
	}
	else if((iAmount>500)&&(iAmount<=1500))
   {
		Discount=(iAmount-((iAmount*10)/100));
		return Discount;
   }
	else if(iAmount>1500)
	{
		Discount=(iAmount-((iAmount*15)/100));
		return Discount;
	}
}

int main()
{
	int Bill=0;
	float fRet=0.0;

	printf("enter bill amount\n");
	scanf("%d", &Bill);

	fRet=CalculateBill(Bill);

	printf("%f",fRet);


	

	return 0;
}
