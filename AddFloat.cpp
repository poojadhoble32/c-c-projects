//Add.c

/////////////////////////////////////////////////////////////
//Statement : Application to Add two numbers
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//name : Addition
//input : float,float
//output : float
//description : Addition of two numbers
//Author : Pooja Dhoble
//date : 14/7/2020
///////////////////////////////////////////////////////////////

float AddFloat(
	float fNo1,
	float fNo2
	)
{
	float fAns=0.0;

	fAns=fNo1+fNo2;

	return fAns;
}
	                
int main()
{
	float fValue1=0.0;
	float fValue2=0.0;
	float fRet=0.0;

	fValue1=40.40;
	fValue2=20.20;

	fRet=AddFloat(fValue1,fValue2);

	printf("Addition is %f\n",fRet);

	return 0;
}