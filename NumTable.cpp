#include<stdio.h>

void NumTable(int iNo)
{
	int i=0,iCnt=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=1;;i++)
	{
		if((i%iNo)==0)
		{
			 printf("%d\n",i);
		
		     iCnt++;
		}

	if(iCnt==10)
	{
		break;
	}	}

   
}

int main()
{
	int iValue=0;

	printf("enter number \n");
	scanf("\n%d",&iValue);

	NumTable(iValue);
	
	return 0;

}
