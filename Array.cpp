/*//add even num

#include<stdio.h>
#include<malloc.h>

int EvenSum(int *Arr,int iLength)
{
	int iCnt=0,iSum=0;

	if((Arr==NULL)||(iLength<=0))
	{
		printf("incorrect length or memory is null\n");
		return -1;
	}

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iSum=iSum+Arr[iCnt];
		}
	}

	return iSum;
}

int main()
{
	int iSize=0,iRet=0;
	int *P=NULL;

	printf("enter num of elements\n");
	scanf("%d",&iSize);

	P=(int*)malloc(iSize*(sizeof(int)));

	if(P==NULL)
	{
		printf("unable to allocate memory\n");
		return -1;
	}

	printf("enter elements\n");

	for(int iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}

	iRet=EvenSum(P,iSize);

	printf("sum is : %d\n",iRet);

	free(P);

	return 0;
}
*/
/*
//average & percentage

#include<stdio.h>
#include<stdlib.h>

void AvgPer(int *Arr,int iLength)
{
	int iCnt=0,iTotal=0,A=0;
	double fAvg=0.0,fPer=0.0;

	if((Arr==NULL)||(iLength<=0))
	{
		printf("incorrect length or memory is null\n");
	}

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iTotal=iTotal+Arr[iCnt];
	}

	A=iLength*100;

	fPer=(iTotal*100)/A;

	fAvg=iTotal/iLength;

	printf("average is=%lf\n",fAvg);
	printf("percentage is=%lf\n",fPer);
}

int main()
{
	int iSize=0;
	int *P=NULL;

	printf("enter num of subjects\n");
	scanf("%d",&iSize);

	P=(int*)malloc(iSize*(sizeof(int)));

	if(P==NULL)
	{
		printf("unable to allocate memory\n");
		return -1;
	}

	printf("enter marks\n");

	for(int iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}

	AvgPer(P,iSize);

	free(P);

	return 0;
}
*/
/*

//diffrence of even odd num

#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iLength)
{
	int iCnt=0,iDiff=0,iEven=0,iOdd=0;

	if(iLength<=0)
	{
		printf("not valid input");
	}

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEven=iEven+Arr[iCnt];
		}
		else
		{
			iOdd=iOdd+Arr[iCnt];
		}
	}

	iDiff=iEven-iOdd;

	return iDiff;
}

int main()
{
	int iSize=0,iRet=0;
	int *P=NULL;

	printf("enter size of number\n");
	scanf("%d",&iSize);

	P=(int*)malloc(sizeof(int)*iSize);

	if(P==NULL)
	{
		printf("no memory\n");
		return -1;
	}

	printf("enter values\n");

	for(int iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}

	iRet=Difference(P,iSize);

	printf("difference = %d\n",iRet);

	free(P);

	return 0;
}
*/
/*
//accenpt numbers and one another num N check its last occurance

#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iLength,int iNo)
{
	int iCnt=0,iLast=0;

	if(iLength<=0)
	{
		printf("not valid input");
	}

	for(iCnt=iLength-1;iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}

	if(iCnt==-1)
	{
		printf("not found\n");
		return -1;
	}
	else
	{
		return iCnt;
	}
	
}

int main()
{
	int iSize=0,iNum=0,iRet=0;
	int *P=NULL;

	printf("enter size of number\n");
	scanf("%d",&iSize);

	printf("enter the number to check\n");
	scanf("%d",&iNum);

	P=(int*)malloc(sizeof(int)*iSize);

	if(P==NULL)
	{
		printf("no memory\n");
		return -1;
	}

	printf("enter values\n");

	for(int iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}

	iRet=Difference(P,iSize,iNum);

	printf("occurence = %d\n",iRet);

	free(P);

	return 0;
}
*/

/*
//accept n num update that number is such way if number is even then increament its value by 4 and if num is odd the decrease its value by 3

#include<stdio.h>
#include<stdlib.h>

void Difference(int *Arr,int iLength)
{
	int iCnt=0,iLast=0;

	if(iLength<=0)
	{
		printf("not valid input");
	}

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			printf("%d\t",Arr[iCnt]+4);
		}
		else
		{
			printf("%d\t",Arr[iCnt]-3);
		}
	}
}

int main()
{
	int iSize=0,iNum=0,iRet=0;
	int *P=NULL;

	printf("enter size of number\n");
	scanf("%d",&iSize);

	//printf("enter the number to check\n");
	//scanf("%d",&iNum);

	P=(int*)malloc(sizeof(int)*iSize);

	if(P==NULL)
	{
		printf("no memory\n");
		return -1;
	}

	printf("enter values\n");

	for(int iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}

	Difference(P,iSize);

//	printf("occurence = %d\n",iRet);

	free(P);

	return 0;
}
*/
/*
// find large number


#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iLength)
{
	int iCnt=0,iLarge=0;

	if(iLength<=0)
	{
		printf("not valid input");
	}

	iLarge=Arr[0];

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iLarge)
		{
			iLarge=Arr[iCnt+1];
		}
	}

	return iLarge;
}

int main()
{
	int iSize=0,iNum=0,iRet=0;
	int *P=NULL;

	printf("enter size of number\n");
	scanf("%d",&iSize);

	//printf("enter the number to check\n");
	//scanf("%d",&iNum);

	P=(int*)malloc(sizeof(int)*iSize);

	if(P==NULL)
	{
		printf("no memory\n");
		return -1;
	}

	printf("enter values\n");

	for(int iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}

	iRet=Difference(P,iSize);

	printf("occurence = %d\n",iRet);

	free(P);

	return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr,int iLength)
{
	int iCnt=0,iLarge=0,iSmall=0;

	if(iLength<=0)
	{
		printf("not valid input");
	}

	iLarge=Arr[0];
	iSmall=Arr[0];

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iLarge)
		{
			iLarge=Arr[iCnt];
		}

		if(Arr[iCnt]<iSmall)
		{
			iSmall=Arr[iCnt];
		}
	}

	return iLarge-iSmall;
}

int main()
{
	int iSize=0,iNum=0,iRet=0;
	int *P=NULL;

	printf("enter size of number\n");
	scanf("%d",&iSize);

	//printf("enter the number to check\n");
	//scanf("%d",&iNum);

	P=(int*)malloc(sizeof(int)*iSize);

	if(P==NULL)
	{
		printf("no memory\n");
		return -1;
	}

	printf("enter values\n");

	for(int iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}

	iRet=Difference(P,iSize);

	printf("occurence = %d\n",iRet);

	free(P);

	return 0;
}
*/


//display number which have three digits

#include<stdio.h>
#include<malloc.h>

void DigitNum(int Arr[],int iSize)
{
	int iSum=0,iCnt=0,iDigit=0,iDcnt=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=0;
		//int A=Arr[iCnt];
		while(Arr[iCnt]>0)
		{
			iDigit=Arr[iCnt]%10;
			iSum=iSum+iDigit;
			Arr[iCnt]=Arr[iCnt]/10;
		}
        
     	printf("%d\t",iSum);
		
	}
}

int main()
{
	int rffv iCnt=0,iSize=0;
	int *P=NULL;

	printf("enter num size\n");
	scanf("%d",&iSize);

	P=(int*)malloc(sizeof(int)*iSize);

	if(P==NULL)
	{
		return -1;
	}

	printf("enter elements\n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&P[iCnt]);
	}

	DigitNum(P,iSize);

	free(P);

	return 0;
}






















