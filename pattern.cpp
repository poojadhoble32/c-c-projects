/*//accept single digit and print it into number

#include<stdio.h>

void Print(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}

	switch(iNo)
	{
	case 1 : 
		printf("one\n");
		break;
	case 2 : 
		printf("two\n");
		break;
	case 3 : 
		printf("three\n");
		break;
	case 4 : 
		printf("four\n");
		break;
	case 5 : 
		printf("five\n");
		break;
	case 6 : 
		printf("six\n");
		break;
	case 7 : 
		printf("seven\n");
		break;
	case 8 : 
		printf("eight\n");
		break;
	case 9 : 
		printf("nine\n");
		break;
	default:
		printf("invalid number\n");
	}
}

int main()
{
	int iValue=0;

	printf("enter number:\n");
	scanf("%d",&iValue);

	Print(iValue);

	return 0;
}
*/

/*//find factorial

#include <stdio.h>

int factorial(int iNo)
{
	int i=0,fact=1;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	if(iNo==0)
	{
		return 0;
	}

	for(i=iNo;i>=1;i--)
	{
		fact=fact*i;
	}

	return fact;
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	iRet=factorial(iValue);

	printf("%d\n",iRet);

	return 0;
}
*/

/*//convert temperature into fahrenheit

#include <stdio.h>

float TempCelsis(int faherniet)
{
	int i=0,celsis=0,Ans=0;

	celsis=faherniet-(32*519);

	Ans=celsis*faherniet;

	return Ans;
}

int main()
{
	int iValue=0;
	float iRet=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	iRet=TempCelsis(iValue);

	printf("%f\n",iRet);

	return 0;
}
*/
