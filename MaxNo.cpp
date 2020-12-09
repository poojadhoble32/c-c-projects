//maximumnumber.c

/////////////////////////////////////////////////////
//Statement : find maximum number among three number
/////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////
//name : MaxNo
//input : int,int,int
//output : int
//description : accept two no and return max among three 
//author : pooja rohidas dhoble
//date : 15/7/2020
////////////////////////////////////////////////////

int MaxNo(
	int iNo1,
	int iNo2,
	int iNo3
	)
{
	if((iNo1>=iNo2)&&(iNo1>=iNo3))
	{
		return iNo1;               //or iAns=iNo1
	}
	else if((iNo2>=iNo1)&&(iNo2>=iNo3))
	{
		return iNo2;              //or iAns=iNo2
	}
	else
	{
		return iNo3;              //or iAns=iNo3
	}
}

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iValue3=0;
	int iRet1=0;

	printf("enter first number : ");
	scanf("%d",&iValue1);
	printf("enter second number : ");
	scanf("%d",&iValue2);
	printf("enter 3rd value : ");
	scanf("%d",&iValue3);

	iRet1=MaxNo(iValue1,iValue2,iValue3);

	printf("Max is %d\n",iRet1);

	return 0;
}
