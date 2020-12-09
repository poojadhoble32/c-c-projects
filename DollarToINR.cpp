#include<stdio.h>

int DollarToINR(int iNo1)
{
	 int i1$=70,iRupees=0;

	 iRupees=iNo1*i1$;

	 return iRupees;
}    


int main()
{ 
	int iValue1=0;
	int iRet=0;

	printf("enter number of USD \n");
	scanf("%d",&iValue1);

	iRet=DollarToINR(iValue1);

	printf("Value in INR is \n %d\n",iRet);

	return 0;
}