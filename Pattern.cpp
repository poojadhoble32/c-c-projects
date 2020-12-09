#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	//(2)for(iCnt=iNo;iCnt>0;iCnt--)
	//(3,4)for(iCnt=1;iCnt<=iNo;iCnt++)
	//(5)for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		//2printf("%d#\t",iCnt);
		//3printf("%d *\t",iCnt);
		//4printf("# %d *\t",iCnt);
		//5printf("%d\t",iCnt*2);
	}

}

int main()
{ 
	int iValue=0;

	printf("enter  number of elements\n");
	scanf("%d",&iValue);

	Pattern(iValue);

	return 0;
}