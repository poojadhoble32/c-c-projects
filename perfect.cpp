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

void PerfectNum(PNODE First)
{
	int iCnt=0,iSum=0;

	while(First!=NULL)
	{
		for(iCnt=(First->Data)/2;iCnt>=1;iCnt--)
		{
		    if(((First->Data)%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}
		}

		if((First->Data)==iSum)
		{
			printf("%d\n",iSum);
		}

		First=First->Next;
	}
		
}
int main()
{
	printf("inside main\n");

	PNODE Head=NULL;

	InsertFirst(&Head,4);
	InsertFirst(&Head,2);
	InsertFirst(&Head,28);
	InsertFirst(&Head,2);
	InsertFirst(&Head,5);
	//InsertFirst(&Head,0);
	//InsertFirst(&Head,-1);
	//InsertFirst(&Head,8);

	PerfectNum(Head);

	return 0;
}