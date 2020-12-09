//ReturnTax.c

//accept gross income and return tax for income

#include<stdio.h>

float CalculateBill(int iAmount)
{
	float Discount=0.0;

	if(iAmount<0)
	{
		iAmount=-iAmount;
	}
	

	if(iAmount<=500000)
	{
       Discount=((iAmount*0)/100);

	   return Discount;
	}
	else if((iAmount>500000)&&(iAmount<=1000000))
   {
		Discount=((iAmount/100)*10);
		return Discount;
   }
	else if((iAmount>1000000)&&(iAmount<=2000000))
	{
		Discount=((iAmount*20)/100);
		return Discount;
	}
	else if(iAmount>2000000)
	{
       Discount=((iAmount*30)/100);

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
