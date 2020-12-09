#include<stdio.h>

void Pattern(int iNo1,int iNo2)
{
	int iRow=0,iCol=0;

	if((iNo1<0)||(iNo2<0))
	{
		iNo1=-iNo1;
		iNo2=-iNo2;
	}
		//for(iCol=1;iCol<=iNo2;iCol++)
	
     for(iRow=1;iRow<=iNo1;iRow++)
	{
		//for(iRow=1;iRow<=iNo1;iRow=
		
	   for(iCol=1;iCol<=iNo2;iCol++)
			//for(iCol=iNo2;iCol>0;iCol--)
		{
	//		if((iCol%2)==0)
	//		{
	//			printf("#\t");
	//		}
	//		else
	//		{
	//			printf("*\t");
	//		}

             printf("%d\t",iCol+iRow);
			//(1)printf("*\t");
		}
		printf("\n");
		
	}

}

int main()
{ 
	int iValue1=0,iValue2=0;

	printf("enter  number of Rows and coloumns\n");
	scanf("%d%d",&iValue1,&iValue2);

	Pattern(iValue1,iValue2);

	return 0;
}