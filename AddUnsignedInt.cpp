#include<stdio.h>

///////////////////////////////////////////////////////////////
//name : Addition
//input : int,int
//output : int
//description : Addition of two numbers
//Author : Pooja Dhoble
//date : 14/7/2020
///////////////////////////////////////////////////////////////

unsigned AddInt(
	unsigned iNo1,                // long long int can also write as long long
	unsigned iNo2
	)
{
	unsigned iAns=0;

	iAns=iNo1-iNo2;

	return iAns;
}
	                
int main()
{
	unsigned iValue1=0;
	unsigned iValue2=0;
	unsigned iRet=0;

	iValue1=0;
	iValue2=1;

	iRet=AddInt(iValue1,iValue2);

	printf("Addition is %u\n",iRet);

	return 0;
}