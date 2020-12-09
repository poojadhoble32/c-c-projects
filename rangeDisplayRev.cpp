#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
	int iCnt=0;

    if(iStart<=iEnd)
	{
	for(iCnt=iEnd;iCnt>=iStart;iCnt--)
	{
		printf("%d\n",iCnt);
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

	RangeDisplayRev(iValue1,iValue2);

	return 0;
}

	