#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct Node
{
	int Data;
	struct Node*Next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE,PPNODE,int);
void Display(PNODE,PNODE);
int Count(PNODE,PNODE);
void InsertLast(PPNODE,PPNODE,int);
void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(PPNODE,PPNODE);
void InsertAtPos(PPNODE,PPNODE,int,int);
void DeleteAtPos(PPNODE,PPNODE,int);

int main()
{
	PNODE Head=NULL;
	PNODE Tail=NULL;
	int iRet=0;

	InsertFirst(&Head,&Tail,30);
	InsertFirst(&Head,&Tail,20);
	InsertFirst(&Head,&Tail,10);

	Display(Head,Tail);

	iRet=Count(Head,Tail);
	printf("%d\n",iRet);

	InsertLast(&Head,&Tail,40);
	InsertLast(&Head,&Tail,50);
	InsertLast(&Head,&Tail,60);

	Display(Head,Tail);

	DeleteFirst(&Head,&Tail);

	Display(Head,Tail);

	DeleteLast(&Head,&Tail);

	Display(Head,Tail);

	InsertAtPos(&Head,&Tail,10,1);
	InsertAtPos(&Head,&Tail,35,4);

	Display(Head,Tail);

	DeleteAtPos(&Head,&Tail,4);
	
	Display(Head,Tail);

	return 0;
}

void InsertFirst(PPNODE First,PPNODE Last,int No)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	printf("InsertFirst\n");

	newn->Data=No;
	newn->Next=NULL;

	if((*First==NULL)&&(*Last==NULL))
	{
		*First=newn;
		*Last=newn;
	}
	else
	{
		newn->Next=*First;
		*First=newn;
	}
	(*Last)->Next=(*First);
	printf("\n");
}

void Display(PNODE First,PNODE Last)
{
	
	printf("Display\n");

	if((First==NULL)&&(Last==NULL))
	{
		return;
	}

	do
	{
		printf("%d\t",First->Data);
		First=First->Next;
	}while(First!=Last->Next);

	printf("\n");
}


int Count(PNODE First,PNODE Last)
{
	int iCnt=0;

	printf("Count\n");

	if((First==NULL)&&(Last==NULL))
	{
		return 0;
	}

	do
	{
		iCnt++;
		First=First->Next;
	}while(First!=Last->Next);

	printf("\n");

	return iCnt;
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));

	printf("InsertLast\n");

	newn->Data=No;
	newn->Next=NULL;

	if((*First==NULL)&&(*Last==NULL))
	{
		*First=newn;
		*Last=newn;
	}
	else
	{
		(*Last)->Next=newn;
		(*Last)=(*Last)->Next;
	}
	(*Last)->Next=(*First);

	printf("\n");
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
	printf("DeleteFirst\n");

	if((*First==NULL)&&(*Last==NULL))
	{
		return;
	}
	else if(*First==*Last)
	{

		free(*First);
		*First=NULL;
		*Last=NULL;
	}
	else
	{
		(*First)=(*First)->Next;
		free((*Last)->Next);
		(*Last)->Next=(*First);
	}
}

void DeleteLast(PPNODE First,PPNODE Last)
{
	printf("Delete last\n");

	PNODE Temp=NULL;

	if(((*First)==NULL)&&((*Last)==NULL))
	{
		return;
	}
	else if((*First)==(*Last))
	{
		free(*Last);
		(*First)=NULL;
	}
	else
	{
		Temp=(*First);

		while(Temp->Next=(*Last))
		{
			Temp=Temp->Next;
		}

		free(*Last);
		(*Last)=Temp;
		(*Last)->Next=(*First);
	}
}

void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{
	printf("InsertAtPos\n");

	int iSize=0,iCnt=0;
	PNODE newn=NULL;
	PNODE Temp=*First;
	iSize=Count(*First,*Last);

	if((iPos<1)||(iPos>iSize+1))
	{
		return;
	}

	if(iPos==1)
	{
		InsertFirst(First,Last,No);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(First,Last,No);
	}
	else
	{
		Temp=*First;

		
		for(iCnt=1;iCnt<iPos-1;iCnt++)
		{
			Temp=Temp->Next;
		}

		newn=(PNODE)malloc(sizeof(NODE));

		newn->Next=NULL;
		newn->Data=No;

		newn->Next=Temp->Next;
		Temp->Next=newn;
	}
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
	printf("DeleteAtPos\n");

	PNODE Temp=NULL;
	PNODE Target=NULL;
	int iCnt=0;
	int iSize=Count(*First,*Last);

	if((iPos<=1)||(iPos>iSize))
	{
		return;
	}

	if(iPos==1)
	{
		DeleteFirst(First,Last);
	}
	else if(iPos==iSize)
	{
		DeleteLast(First,Last);
	}
	else
	{
		Temp=*First;

		for(iCnt=1;iCnt<iPos-1;iCnt++)
		{
			Temp=Temp->Next;
		}

		Target=Temp->Next;

		Temp->Next=Target->Next;
		free(Target);
	}
}