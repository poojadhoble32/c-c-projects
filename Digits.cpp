/*
//count num of digits

#include<stdio.h>

int Digit(int iNo)
{
	int icnt=0,digit=0;

	if(iNo==0)
	{
		return 1;
	}

	while(iNo!=0)
	{
		digit=iNo%10;
		icnt++;
		iNo=iNo/10;
	}

	return icnt;
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	iRet=Digit(iValue);

	printf("%d\n",iRet);

	return 0;
}
*/

/*
//display digits in reverse order

#include<stdio.h>

void Digit(int iNo)
{
	int icnt=0,digit=0;

	while(iNo!=0)
	{
		digit=iNo%10;
		printf("%d",digit);
		iNo=iNo/10;
	}
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	Digit(iValue);

	return 0;
}
*/

/*
//check frequency number is balance or not in single counter

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Digit(int iNo)
{
	int icnt1=0,digit=0;

	while(iNo!=0)
	{
		digit=iNo%10;
		
		if(digit%2==0)
		{
			icnt1++;
		}
		else
		{
			icnt1--;
		}
	
		iNo=iNo/10;
	}

	if(icnt1==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue=0;
	BOOL iRet=FALSE;

	printf("enter number\n");
	scanf("%d",&iValue);

	iRet=Digit(iValue);

	if(iRet==TRUE)
	{
		printf("balanced\n");
	}
	else
	{
		printf("not balanced\n");
	}

	return 0;
}
*/

//reverse number

#include<stdio.h>

void Digit(int iNo)
{
	int icnt=0,digit=0,evenrev=0,oddrev=0;

	while(iNo!=0)
	{
		digit=iNo%10;

		if(digit%2==0)
		{
			evenrev=(evenrev*10)+digit;
		}
		else
		{
			oddrev=(oddrev*10)+digit;
		}
		iNo=iNo/10;
	}

	printf("%d\n%d",evenrev,oddrev);
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	Digit(iValue);

	return 0;
}

