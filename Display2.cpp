
#include<stdio.h>

void DisplaySeries(int iNo1,char ch)
{
	int i=0;

	if(iNo1<0)
	{
		iNo1=-iNo1;
	}

	while(i<iNo1)
	{
		printf("%c\n",ch);
		i++;
	}
}

int main()
{
	int iValue1=0;
	char ch='\0';

	printf("enter char\n");
	scanf("%c",&ch);

	printf("enter num\n");
	scanf("%d",&iValue1);

	DisplaySeries(iValue1,ch);

	return 0;
}