#include<stdio.h>

void OddDigitMult(int iNo1)
{
	int iDigit=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

    while(iNo1!=0)
	{
		iDigit=iNo1%10;
        printf("%d\n",iDigit);		
		iNo1=iNo1/10;
	}


}

int main()
{ 
	int iValue1=0;

	printf("enter  number\n");
	scanf("%d",&iValue1);

	OddDigitMult(iValue1);

	

	return 0;
}