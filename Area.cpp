/*// Area of circle

#include<stdio.h>

float Area(int iRadius)
{
	float Pi=3.14,Area=0.0;

	Area=Pi*iRadius*iRadius;

	return Area;
}

int main()
{
	int iRadius=0;
	float iRet=0.0;

	printf("enter radius of circle\n");
	scanf("%d",&iRadius);

	iRet=Area(iRadius);

	printf("%f\n",iRet);

	return 0;
}
*/





/*
// greatest number among three number

#include<stdio.h>

int LargeNum(int iNo1,int iNo2,int iNo3)
{
	int iAns=0;

	if((iNo1>=iNo2)&&(iNo1>=iNo3))
	{
		iAns=iNo1;
	}
	else if((iNo2>=iNo1)&&(iNo2>=iNo3))
	{
		iAns=iNo2;
	}
	else
	{
		iAns=iNo3;
	}

	return iAns;
}

int main()
{
	int iValue1=0,iValue2=0,iValue3=0,iRet=0;

	printf("enter numbers : \n");
	scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

	iRet=LargeNum(iValue1,iValue2,iValue3);

	printf("large value is : %d",iRet);

	return 0;
}
*/


