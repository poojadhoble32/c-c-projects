#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
	int iCnt=0;

    if(iStart<=iEnd)
	{
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)

	{
		printf("%d\n",iCnt);
	}
	}
	}
	else
	{
		printf("invalid range");
	}
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("enter start and end number \n");
	scanf("%d\n%d",&iValue1,&iValue2);

	RangeDisplayEven(iValue1,iValue2);

	return 0;
}

	