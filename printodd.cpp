#include<stdio.h>

void Printodd(int iNo)
{
	int iCntodd=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

		for(iCntodd=1;iCntodd<=iNo;iCntodd++)
		{
			 if((iCntodd%2)!=0)
			 {
			      printf("number is odd %d\n",iCntodd);
			 }
		}
}

int main()
{
	int iValue=0;

	printf("enter number\n");
	scanf("%d",&iValue);

	Printodd(iValue);

	return 0;
}



