//Add.c

/////////////////////////////////////////////////////////////
//Statement : Application to Add two numbers
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//name : Addition
//input : int,int
//output : int
//description : Addition of two numbers
//Author : Pooja Dhoble
//date : 14/7/2020
///////////////////////////////////////////////////////////////

long AddInt(
	long iNo1,                // long int can also write as long
	long iNo2
	)
{
	long iAns=0;

	iAns=iNo1+iNo2;

	return iAns;
}
	                
int main()
{
	long iValue1=0;
	long iValue2=0;
	long iRet=0;

	iValue1=444444444444444;
	iValue2=222222222222222;

	iRet=AddInt(iValue1,iValue2);

	printf("Addition is %li\n",iRet);

	return 0;
}