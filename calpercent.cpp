#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
	float iPer=0.0;

	if(iNo2==0)
	{
		iPer=0.0;
	}
	               
	iPer=((iNo2*100)/iNo1);                       //operator priority 1=*,2nd=/

	return iPer;
}

int main()
{ 
	int iValue1=0,iValue2=0;
	float iRet=0.0;

	printf("enter total marks \n");
	scanf("%d",&iValue1);

	printf("enter obtained marks \n");
	scanf("%d",&iValue2);

	iRet=Percentage(iValue1,iValue2);

	printf("percentage are \n %f",iRet);

	return 0;
}
