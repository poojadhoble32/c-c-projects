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

int AddInt(
	int iNo1,
	int iNo2
	)
{
	int iAns=0;

	iAns=iNo1+iNo2;

	return iAns;
}
	                
int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRet=0;

	iValue1=444444;
	iValue2=222222;

	iRet=AddInt(iValue1,iValue2);

	printf("Addition is %d\n",iRet);

	return 0;
}