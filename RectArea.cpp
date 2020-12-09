#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
	double dArea=0.0;

	dArea=fWidth*fHeight;

	return dArea;
}

int main()
{ 
	float fValue1=0.0,fValue2=0.0;
	double dRet=0.0;

	printf("enter the width and height \n");
	scanf("%f\n%f",&fValue1,&fValue2);

	dRet=RectArea(fValue1,fValue2);

	printf("Area is \n %lf\n",dRet);

	return 0;
}