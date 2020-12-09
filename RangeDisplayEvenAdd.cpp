#include<stdio.h>

int RangeDisplayEvenAdd(int iStart,int iEnd)
{
	int iCnt=0,iSum=0;

    if((iStart>=0)&&(iStart<=iEnd))
	{
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)
	{
		iSum=iSum+iCnt;
	}
	}
	}
	else
	{
		printf("invalid range");
	}

	return iSum;

	
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;

	printf("enter start and end number \n");
	scanf("%d\n%d",&iValue1,&iValue2);

	iRet=RangeDisplayEvenAdd(iValue1,iValue2);

	printf("Addition is \n %d",iRet);

	return 0;
}

	