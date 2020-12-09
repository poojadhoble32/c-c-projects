#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct Node
{
	int Data;
	struct Node*Next;
};

typedef struct Node NODE;
typedef struct Node*PNODE;
typedef struct Node**PPNODE;

void InsertFirst(PPNODE First,int iNo)
{
	printf("InsertFirst\n");

	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->Data=iNo;
	newn->Next=NULL;

	if(*First==NULL)
	{
		*First=newn;
	}
	else
	{
		newn->Next=*First;
		*First=newn;
	}
}

int Count(PNODE First)
{
	printf("inside count size\n");

	int iCnt=0;

	while(First!=NULL)
	{
		iCnt++;
		First=First->Next;
	}

	printf("size is:%d\n",iCnt);

	return iCnt;
}

int EvenAddition(PNODE First)
{
	printf("inside EvenAddition\n");

	int iCnt=0,iSum=0,iSize=0;

	iSize=Count(First);

	if(First==NULL)
	{
		return -1;
	}
	else
	{
		while((First)!=NULL)
		{
			if(((First->Data)%2)==0)
			{
				iSum=iSum+(First->Data);
		    }
			First=First->Next;
		}
	}

	return iSum;
}

int Frequency(PNODE First,int iNo)
{
	int iCnt=0;

	if(First==NULL)
	{
		return -1;
	}
	else
	{
		while((First)!=NULL)
		{
			if((First->Data)==iNo)
			{
				iCnt++;
		    }
			First=First->Next;
		}
	}

	return iCnt;
}

int SumElements(PNODE First)
{
	printf("inside SumElements\n");

	int iSum=0;

	if(First==NULL)
	{
		return -1;
	}
	else
	{
		while((First)!=NULL)
		{
			iSum=iSum+(First->Data);
			First=First->Next;
		}
	}

	return iSum;
}

void EvenDisplay(PNODE First)
{
	if(First==NULL)
	{
		return;
	}
	else
	{
		printf("even elements are\n");

		while(First!=NULL)
		{
			if(((First->Data)%2)==0)
			{
				printf("%d\n",First->Data);
			}
			First=First->Next;
		}
	}
}

int FirstOcc(PNODE First,int iNo)
{
	int iCnt=1;

	int iSize=Count(First);

	
		while(First!=NULL)
		{
			if(First->Data==iNo)
			{
				printf("%d\n",iCnt);
				break;
		    }
			iCnt++;
			First=First->Next;
		}

		if(iCnt!=iSize)
		{
			return iCnt;
		}
		else
		{
			return -1;
		}
	

	
}

int main()
{
	printf("inside main\n");

	PNODE Head=NULL;

	InsertFirst(&Head,4);
	InsertFirst(&Head,2);
	InsertFirst(&Head,3);
	InsertFirst(&Head,2);
	InsertFirst(&Head,2);
	//InsertFirst(&Head,0);
	//InsertFirst(&Head,-1);
	//InsertFirst(&Head,-2);

	int iRet=EvenAddition(Head);

	printf("Addition is:%d",iRet);

	int iRet1=Frequency(Head,2);

	printf("Frequency is:%d",iRet1);

	int iRet2=SumElements(Head);

	printf("Sum of Element is:%d",iRet2);

	EvenDisplay(Head);

	int iRet3=FirstOcc(Head,10);

	printf("First occurance is at:%d",iRet3);


	return 0;
}


