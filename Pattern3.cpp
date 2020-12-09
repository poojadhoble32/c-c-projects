#include<stdio.h>

void Pattern2(int iRow,int iCol)
{
	int iCnt=1,i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
		if((i%2)!=0)
		{
			if((iCnt%2)==0)
			{
				for(j=1;j<=iCol;j++)
				{
					printf("%d\t",iCnt);
					
				}
				iCnt++;
			}
		}
		else
		{
			if((iCnt%2)!=0)
			{
				for(j=1;j<=iCol;j++)
				{
					printf("%d\t",iCnt);
					
				}
				iCnt++;
			}
		}
		printf("\n");
	}
}

int main()
{ 
	int iValue1=0,iValue2=0;

	printf("enter  number of Rows and coloumns\n");
	scanf("%d%d",&iValue1,&iValue2);

	Pattern2(iValue1,iValue2);

	return 0;
}