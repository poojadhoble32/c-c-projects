#include<stdio.h>

///////////////////////////////////////////////////////////////
//name : Addition
//input : int,int
//output : int
//description : Addition of two numbers
//Author : Pooja Dhoble
//date : 14/7/2020
///////////////////////////////////////////////////////////////

long long AddInt(
	long long iNo1,                // long long int can also write as long long
	long long iNo2
	)
{
	long long iAns=0;

	iAns=iNo1+iNo2;

	return iAns;
}
	                
int main()
{
	long long iValue1=0;
	long long iValue2=0;
	long long iRet=0;

	iValue1=4444444444444444444;
	iValue2=2222222222222222222;

	iRet=AddInt(iValue1,iValue2);

	printf("Addition is %lli\n",iRet);

	return 0;
}