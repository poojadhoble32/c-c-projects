//Add.c

/////////////////////////////////////////////////////////////
//Statement : Application to Add two numbers
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//name : Addition
//input : double,double
//output : double
//description : Addition of two numbers
//Author : Pooja Dhoble
//date : 14/7/2020
///////////////////////////////////////////////////////////////

double AddDouble(
	double dNo1,
	double dNo2
	)
{
	double dAns=0.0;

	dAns=dNo1+dNo2;

	return dAns;
}
	                
int main()
{
	double dValue1=0.0;
	double dValue2=0.0;
	double dRet=0.0;

	dValue1=40.40;
	dValue2=20.20;

	dRet=AddDouble(dValue1,dValue2);

	printf("Addition is %lf",dRet);

	return 0;
}