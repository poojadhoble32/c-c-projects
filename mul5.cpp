
#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int iCnt=0,iCntFact=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

		for(iCntFact=1;;iCntFact++)
		{
			 if((iCntFact%iNo)==0)
			 {
			      printf("number is even %d\n",iCntFact);
				  iCnt++;
			 }
			 if(iCnt==5)
			 {
				break;
			 }
		}
}

int main()
{
	int iValue=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	MultipleDisplay(iValue);

	return 0;
}



