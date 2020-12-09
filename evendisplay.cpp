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

	if(First==NULL)
	{
		return -1;
	}
	else
	{
		while(First!=NULL)
		{
			if((First->Data)==iNo)
			{
				break;
		    }
			iCnt++;
			First=First->Next;
		}

		if(iCnt>iSize)
		{
			return -1;
		}
		else
		{
			return iCnt;
		}
	}

	
}

int LargeNum(PNODE First)
{
	int iCnt=0;

	int iSize=Count(First);

	
		while(First!=NULL)
		{
			if((First->Data)>iCnt)
			{
				iCnt=First->Data;
			}
			First=First->Next;
		}

			return iCnt;
	
	

	
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
	InsertFirst(&Head,0);
	InsertFirst(&Head,-1);
	InsertFirst(&Head,8);

	EvenDisplay(Head);

	int iRet3=LargeNum(Head);

	printf("LargeNum is at:%d",iRet3);



	return 0;
}