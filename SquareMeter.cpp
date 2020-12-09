#include<stdio.h>

double SquareMeter(int ivalue)
{
	float f1SQfeet=0.0929;
	double dSQMeter=0.0;

	dSQMeter=f1SQfeet*ivalue;

	return dSQMeter;
}

int main()
{ 
	int iValue=0;
	double dRet=0.0;

	printf("enter area in square feet \n");
	scanf("%d",&iValue);

	dRet=SquareMeter(iValue);

	printf("square meter is \n %lf\n",dRet);

	return 0;
}
