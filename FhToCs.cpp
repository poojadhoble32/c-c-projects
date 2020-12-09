#include<stdio.h>

double FhToCs(int iTemp)
{
	double dCelcius=0.0;
	int temp=0;
	float temp2=0.0;

	temp=iTemp-32;
    temp2=5/9;
	dCelcius=temp*temp2;

	return dCelcius;
}

int main()
{ 
	int iValue=0;
	double dRet=0.0;

	printf("enter the temprature in fahrenheit \n");
	scanf("%d",&iValue);

	dRet=FhToCs(iValue);

	printf("celcius is \n %lf\n",dRet);

	return 0;
}
