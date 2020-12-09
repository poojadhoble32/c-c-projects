#include<stdio.h>

int KMToMeter(int iNo1)
{
	 int i1Kmeter=1000,iMeter=0;

	 iMeter=iNo1*i1Kmeter;

	 return iMeter;
}    


int main()
{ 
	int iValue1=0;
	int iRet=0;

	printf("enter distance\n");
	scanf("%d",&iValue1);

	iRet=KMToMeter(iValue1);

	printf("Killometer to meter is \n %d\n",iRet);

	return 0;
}