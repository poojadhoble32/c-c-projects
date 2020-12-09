#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0,iCnt1=1;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d",iCnt);
		iCnt1++;

		if(iCnt==iNo)
		{
			break;
		}
	}
}

int main()
{
	int iValue=0;

	printf("enter number");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}