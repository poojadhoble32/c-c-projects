#include<stdio.h>

void Pattern2(int iRow,int iCol)
{
	int i=0,j=0;
	//char ch='\0';
	

	//if(iRow!=iCol)
	//{
	//	return ;
	//}
	

	for(i=1;i<=iRow;i++)
	{
		
				for(j=1;j<=iCol;j++)
				{
					if((i==j)||(i==1)||(j==1)||(i==iRow)||(j==iCol))
					{
					    printf("*\t");
				    }
					
				   
				}
				

		  
			
			printf("\n");
			
	}
		
		
		
	

}

int main()
{ 
	int iValue1=0,iValue2=0;

	printf("enter  number of Rows and coloumns\n");
	scanf("%d%d",&iValue1,&iValue2);

	Pattern2(iValue1,iValue2);

	return 0;
}