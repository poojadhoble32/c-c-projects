#include<stdio.h>

void Reverse(int iNo)
{
	    int iDigit=0;
    	//static int iDigit1=0;

		if(iNo!=0)
		{
		iDigit=iNo%10;
		//if(iDigit>iDigit1)
		//{
			//iDigit1=iDigit;
		//}
		printf("%d",iDigit);
		iNo=iNo/10;
		Reverse(iNo);
	}
	//return iDigit1;
}

int main()
{
	int iNo=0,iRet=0;

	printf("enter number\n");
	scanf("%d",&iNo);

	Reverse(iNo);

	//printf("%d\n",iRet);

	return 0;
}