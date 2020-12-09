//EvenFact

// accept one number and print even factors of that number

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
	int i=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(i=1;i<iNo;i++)
	{
		if((iNo%i)==0)
		{
			if((i%2)==0)
		{
			printf("\n even factors are %d",i);
		}
		}
	}
}

int main()
{
	int iValue=0;

	printf("enter number \n");
	scanf("\n%d",&iValue);

	DisplayEvenFactor(iValue);

	return 0;

}
