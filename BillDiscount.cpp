//biil discount using if...else

#include<stdio.h>

int BillDiscount(int iNo1)
{
	int iAns=0;

	if(iNo1>=1500)
	{
		iAns=(iNo1-((iNo1*15)/100));
		//return iAns;
	}
	else if((iNo1>=500)&&(iNo1<1500))
	{
		iAns=(iNo1-((iNo1*10)/100));
		//return iAns;
	}
	else
	{
		iAns=iNo1;
		//return iAns;
	}

	return iAns;

}

int main()
{
	int iValue1=0,iRet=0;

	printf("accept the bill\n");
	scanf("%d",&iValue1);

	iRet=BillDiscount(iValue1);

	printf("Bill after discount is : %d\n",iRet);

	return 0;
}
