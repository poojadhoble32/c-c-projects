/* //predict even or odd number
#include<stdio.h>

void DisplaySeries(int iNo1)
{
    if((iNo1%2==0))
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}

int main()
{
	int iValue1=0;

	printf("enter num\n");
	scanf("%d",&iValue1);

	DisplaySeries(iValue1);

	return 0;
}
*/


/* //print number of even numbers
#include<stdio.h>

void DisplaySeries(int iNo1)
{
	int i=0,iCnt=0;

	i=1;

    while(iCnt<iNo1)
	{
	    if(i%2==0)
	    {
		   printf("%d\n",i);
		   iCnt++;
	    }
	    i++;
    }
}

int main()
{
	int iValue1=0;

	printf("enter num\n");
	scanf("%d",&iValue1);

	DisplaySeries(iValue1);

	return 0;
} 
*/

/*print number of even numbers 
#include<stdio.h>

void EvenCount(int iNo1)
{
	int i=0,iCnt=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

	i=1;

    while(1)
	{
	    if(i%2==0)
	    {
		   printf("%d\n",i);
		   iCnt++;
	    }

		if(iCnt==iNo1)
		{
			break;
		}
	    i++;


    }
}

int main()
{
	int iValue1=0;

	printf("enter num\n");
	scanf("%d",&iValue1);

	EvenCount(iValue1);

	return 0;
} 
*/



//print even factors of that num

#include<stdio.h>

void DisplayEvenFact(int iNo1)
{
	int i=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

	i=1;

	while(i<=iNo1/2)
	{
			if((i%2==0)&&(iNo1%i==0))
			{
				printf("%d",i);
			}
		
		    i++;
	}
}

int main()
{
	int iValue1=0;

	printf("enter number : ");
	scanf("%d",&iValue1);

	DisplayEvenFact(iValue1);

	return 0;
}
