/*//Factors sum

#include<stdio.h>

int FactSum(int iNo)
{
	int i=0,iSum=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	i=iNo/2;
	while(i>=1)
	{
		if(iNo%i==0)
		{
			iSum=iSum+i;
		}
		i--;
	}
	return iSum;
}

int main()
{
	int iValue=0,iRet=0;

	printf("accept number\n");
	scanf("%d",&iValue);

	iRet=FactSum(iValue);

	printf("%d\n",iRet);

	return 0;
}
*/
/*
//fact and non fact difference

#include<stdio.h>

int FactSum(int iNo)
{
	int i=0,diff=0,iSum=0,iSum1=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	i=iNo-1;
	while(i>=1)
	{
		if(iNo%i==0)
		{
			iSum=iSum+i;
		}
		else
		{
			iSum1=iSum1+i;
		}
		i--;
	}

	diff=iSum-iSum1;

	return diff;
}

int main()
{
	int iValue=0,iRet=0;

	printf("accept number\n");
	scanf("%d",&iValue);

	iRet=FactSum(iValue);

	printf("%d\n",iRet);

	return 0;
}*/

/*//prime number

#include<stdio.h>
#define YES 1
#define NO 0

typedef int BOOL;

BOOL PrimeNum(int iNo)
{
	int i=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	i=iNo/2;
	while(i>1)
	{
		if(iNo%i==0)
		{
			break;
		}
		i--;
	}

	if(i==1)
	{
		return YES;
	}
	else
	{
		return NO;
	}
}
*/

//prime number using

#include<stdio.h>
#define YES 1
#define NO 0

typedef int BOOL;

BOOL PrimeNum(int iNo)
{
	int i=0;
	BOOL flag=YES; 

	if((iNo==0)||(iNo==1)||(iNo==-1))
	{
		return NO;
	}

	if(iNo<0)
	{
		iNo=-iNo;
	}

	i=iNo/2;
	while(i>1)
	{
		if(iNo%i==0)
		{
			flag=NO;
			break;
		}
		i--;
	}

    return flag;
}

int main()
{
	int iValue=0;
	BOOL bRet=NO;

	printf("accept number\n");
	scanf("%d",&iValue);

	bRet=PrimeNum(iValue);

	if(bRet==NO)
	{
	    printf("not prime\n");
	}
	else
	{
		printf("prime\n");
	}

	return 0;
}