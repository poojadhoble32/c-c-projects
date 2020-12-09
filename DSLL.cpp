#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
{
	int Data;
	struct Node*Next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE,int);
void Display(PNODE);
int Count(PNODE);
void InsertLast(PPNODE,int);
void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void InsertAtPos(PPNODE,int,int);
void DeleteAtPos(PPNODE,int);

int main()
{
	PNODE Head=NULL;
	int iRet=0;

	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);

	Display(Head);

	iRet=Count(Head);
	printf("%d\n",iRet);

	InsertLast(&Head,40);
	InsertLast(&Head,50);
	InsertLast(&Head,60);

	Display(Head);

	DeleteFirst(&Head);

	Display(Head);

	DeleteLast(&Head);

	Display(Head);

	InsertAtPos(&Head,10,1);
	InsertAtPos(&Head,35,4);

	Display(Head);

	DeleteAtPos(&Head,4);
	
	Display(Head);

	return 0;
}

void InsertFirst(PPNODE First,int No)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	printf("InsertFirst\n");

	newn->Data=No;
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
	printf("\n");
}

void Display(PNODE First)
{
	printf("Display\n");

	while(First!=NULL)
	{
		printf("%d\t",First->Data);
		First=First->Next;
	}
	printf("\n");
}

int Count(PNODE First)
{
	printf("Count\n");

	int iCnt=0;

	while(First!=NULL)
	{
		iCnt++;
		First=First->Next;
	}

	return iCnt;
}

void InsertLast(PPNODE First,int No)
{
	PNODE newn=NULL;
	PNODE Temp=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	printf("InsertLast\n");

	newn->Data=No;
	newn->Next=NULL;

	if(*First==NULL)
	{
		*First=newn;
	}
	else
	{
		Temp=*First;

		while(Temp->Next!=NULL)
		{
			Temp=Temp->Next;
		}

		Temp->Next=newn;
	}
	printf("\n");
}

void DeleteFirst(PPNODE First)
{
	printf("DeleteFirst\n");

	PNODE Temp=*First;

	if(*First!=NULL)
	{
		*First=(*First)->Next;
		free(Temp);
	}
}

void DeleteLast(PPNODE First)
{
	printf("Delete last\n");

	PNODE Temp=NULL;

	if(*First==NULL)
	{
		return;
	}
	else if((*First)->Next==NULL)
	{
		free(*First);
		*First=NULL;
	}
	else
	{
		Temp=*First;

		while(Temp->Next!=NULL)
		{
			Temp=Temp->Next;
		}

		free(Temp->Next);
		Temp->Next=NULL;
	}
	
}

void InsertAtPos(PPNODE First,int No,int iPos)
{
	printf("InsertAtPos\n");

	int iSize=0,iCnt=0;
	PNODE newn=NULL;
	PNODE Temp=*First;
	iSize=Count(*First);

	if((iPos<1)||(iPos>iSize+1))
	{
		return;
	}

	if(iPos==1)
	{
		InsertFirst(First,No);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(First,No);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));

		newn->Next=NULL;
		newn->Data=No;

		for(iCnt=1;iCnt<iPos-1;iCnt++)
		{
			Temp=Temp->Next;
		}
		newn->Next=Temp->Next;
		Temp->Next=newn;
	}
}

void DeleteAtPos(PPNODE First,int iPos)
{
	printf("DeleteAtPos\n");

	PNODE Temp=*First;
	PNODE Target=NULL;
	int iCnt=0;
	int iSize=Count(*First);

	if((iPos<1)||(iPos>iSize))
	{
		return;
	}

	if(iPos==1)
	{
		DeleteFirst(First);
	}
	else if(iPos==iSize)
	{
		DeleteLast(First);
	}
	else
	{
		for(iCnt=1;iCnt<iPos-1;iCnt++)
		{
			Temp=Temp->Next;
		}

		Target=Temp->Next;

		Temp->Next=Target->Next;
		free(Target);
	}
}