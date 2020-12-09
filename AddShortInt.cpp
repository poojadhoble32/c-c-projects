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

short int AddInt(
	short int iNo1,                // short int can also write as short
	short int iNo2
	)
{
	short int iAns=0;

	iAns=iNo1+iNo2;

	return iAns;
}
	                
int main()
{
	short int iValue1=0;
	short int iValue2=0;
	short int iRet=0;

	iValue1=444444;
	iValue2=222222;

	iRet=AddInt(iValue1,iValue2);

	printf("Addition is %hd\n",iRet);

	return 0;
}