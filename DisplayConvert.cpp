/*
//convert char case

#include<stdio.h>

void DisplayConvert(char ch)
{
	if((ch>=65)&&(ch<=90))
	{
		//ch=ch+32;
		printf("%c\n",ch+32);
	}
	else
	{
		//ch=ch-32;
		printf("%c\n",ch-32);
	}
}

int main()
{
	char cValue1='\0';

	printf("enter character : ");
	scanf("%c",&cValue1);

	DisplayConvert(cValue1);

	return 0;
}
*/

//check char vowel or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DisplayConvert(char ch)
{
	if((ch=='a')||(ch=='A')||(ch=='e')||(ch=='E')||(ch=='i')||(ch=='I')||(ch=='o')||(ch=='O')||(ch=='u')||(ch=='U'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue1='\0';
	BOOL bRet=FALSE;

	printf("enter character : ");
	scanf("%c",&cValue1);

	bRet=DisplayConvert(cValue1);

	if(bRet==TRUE)
	{
		printf("char is vowel\n");
	}
	else
	{
		printf("char is not vowel\n");
	}
	return 0;
}