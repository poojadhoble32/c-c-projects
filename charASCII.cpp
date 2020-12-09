#include<stdio.h>

void DisplayASCII(char ch)
{
	int iCnt=0;

	for(iCnt=0;iCnt<=127;iCnt++)
	{
		if(iCnt==ch)
		{
			printf("%c\t=\t%d\t%x\t%o",iCnt,iCnt,iCnt,iCnt);
		}
	}
		
}

int main()
{
	char cValue='\0';

	printf("enter the char\n");
	scanf("%c",&cValue);

    DisplayASCII(cValue);

	return 0;
}