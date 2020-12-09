#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void SumDiagonal(int**Arr,int,int,int);

int main()
{
	int**P=NULL;
	int iRow=0,iCol=0,iRet=0,i=0,j=0,No=0;

	printf("enter number of rows");
	scanf("%d",&iRow);

	printf("enter number of columns");
	scanf("%d",&iCol);

	P=(int**)malloc(iRow*(sizeof(int*)));

	for(i=0;i<iRow;i++)
	{
		P[i]=(int*)malloc(iCol*sizeof(int));
	}

	printf("enter the values");

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
             scanf("%d",&P[i][j]);
		}
	}

	//printf("enter the number");
	//scanf("%d",&No);

	SumDiagonal(P,iRow,iCol,No);

	//printf("%d",iRet);

    for(i=0;i<iRow;i++)
	{
		free(P[i]);
	}

	free(P);

	return 0;
}

void SumDiagonal(int**Arr,int iRow,int iCol,int No)
{
	int Large=0,i=0,j=0,K=0;

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			Large=0;
			for(K=0;K<iRow;K++)
			{
				Large=Large+Arr[K][j];
			}
			printf("%d\t",Large);
	
		}
		
	}
	//return Large;
}
	