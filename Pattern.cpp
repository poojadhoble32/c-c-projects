#include<stdio.h>

void Pattern(int i,int j)
{
	int row=0;
	int col=0;

	if(i!=j)
	{
		return;
	}

	if((i<0)||(j<0))
	{
		i=-i;
		j=-j;
	}

	for(row=1;row<=i;row++)
	{
		
		for(col=1;col<=j;col++)
		{
			if((row==1)||(row==col)||(row==i)||(col==1)||(col==j))
			{
                printf("*\t");
		    }
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
		printf("\n");
	}
}

int main()
{
	int iRow=0;
	int iCol=0;

	printf("enter size of rows\n");
	scanf("%d",&iRow);
	printf("enter size of cols\n");
	scanf("%d",&iCol);

	Pattern(iRow,iCol);

	return 0;
}