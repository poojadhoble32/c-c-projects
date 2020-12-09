#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void EFrequency(int Arr[],int iLength)
{
	int iCnt=0,Digit=0,iSum=0;

//	if((Arr[iCnt]==NULL)||(iLength<=0))
	//{
	//	return -1;
	//}

	

	while(iCnt<iLength)
	{
		while(Arr[iCnt]!=0)
		{
	    Arr[iCnt]=Arr[iCnt]/10;
		iSum++;
		}
			if(iSum==3)
		{
			printf("%d",iSum);
		}
		

	
	}
	iCnt++;
	
}

int main()
{
	int iSize=0,iCnt=0;
	int*P=NULL;

	printf("enter the size");
	scanf("%d",&iSize);

	P=(int*)malloc(iSize*sizeof(int));

	if(P==NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}

	printf("enter %d  elements\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("enter element:%d\n",iCnt+1);
		scanf("%d",&P[iCnt]);
	}

	
	free(P);

	return 0;
}
