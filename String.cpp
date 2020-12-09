/*//count frequency of vowels

#include<stdio.h>

int Vowels(char Brr[])
{
	int iCnt=0;

	if(Brr==NULL)
	{
		return -1;
	}

	while(*Brr!='\0')
	{
		if((*Brr=='A')||(*Brr=='a')||(*Brr=='E')||(*Brr=='e')||(*Brr=='I')||(*Brr=='i')||(*Brr=='O')||(*Brr=='o')||(*Brr=='U')||(*Brr=='u'))
		{
			iCnt++;
		}
		Brr++;
	}

	return iCnt;
}

int main()
{
	char Str[10];
	int iRet=0;

	printf("enter string\n");
	scanf("%[^'\n']s",&Str);

	iRet=Vowels(Str);

	printf("vowels are=%d",iRet);

	return 0;
}
*/
/*
//check char is digit or not

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Vowels(char ch)
{
	if((ch>=48)&&(ch<=57))
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
	char ch='\0';
	BOOL iRet=FALSE;

	printf("enter char\n");
	scanf("%c",&ch);

	iRet=Vowels(ch);

	if(iRet==TRUE)
	{
		printf("it is digit\n");
	}
	else
	{
		printf("not digit\n");
	}

	return 0;
}
*/
/*
//count number if capital characters

#include<stdio.h>

int CountCapital(char Str[])
{
	int iCnt=0;

	while(*Str!='\0')
	{
		if((*Str>='A')&&(*Str<='Z'))
		{
			iCnt++;
		}
	Str++;
	}

	return iCnt;
}

int main()
{
	char Str[20];
	int iRet=0;

	printf("enter string\n");
	scanf("%[^'\n']s",&Str);

	iRet=CountCapital(Str);

	printf("%d\n",iRet);

	return 0;
}
*/

//display ascii value for hex , decimal,octal
/*
#include<stdio.h>

void ASCII(char ch)
{
	printf("%d\t%o\t%x\t%c",ch,ch,ch,ch);
 
}

int main()
{
	char ch='\0';

	printf("enter char\n");
	scanf("%c",&ch);

	ASCII(ch);

	return 0;
}
*/
/*
//reverse string

#include<stdio.h>

void CountCapital(char Str[])
{
	int iCnt=0;
	char *P=NULL;

	for(*Str='\0';*Str>=)
	{
		if((*Str>='A')&&(*Str<='Z'))
		{
			iCnt++;
		}
	Str++;
	}

	return iCnt;
}

int main()
{
	char Str[20];
//	int iRet=0;

	printf("enter string\n");
	scanf("%[^'\n']s",&Str);

	CountCapital(Str);

	//printf("%d\n",iRet);

	return 0;
}
*/
/*
//last occurance

#include<stdio.h>

int CountCapital(char *Str,char ch)
{
	int iCnt=0;
	char *End=NULL;
	End=Str;

	while(*End!='\0')
	{
	End++;
	iCnt++;
	}

	End--;

	//printf("%d\n",iCnt);

	while(End>=Str)
	{
		if(*End==ch)
		{
			break;
		}
		iCnt--;
		End--;
	}

	//printf("no2\n");

	if(End>=Str)
	{
		return iCnt;
	}
	else
	{
		return -1;
	}
}

int main()
{
	char Str[20],ch='\0';
	int iRet=0;

	printf("enter char\n");
	scanf("%c",&ch);

	printf("enter string\n");
	scanf(" %[^'\n']s",Str);

	iRet=CountCapital(Str,ch);

	printf("%d\n",iRet);

	return 0;
}
*/
/*
//reverse string at same place

#include<stdio.h>

void Reverse(char*Str)
{
	char Temp='\0';
	char*Start=NULL;
	char*End=NULL;

	if(Str==NULL)
	{
		return;
	}

	Start=Str;
	End=Str;

	while(*End!='\0')
	{
		End++;
	}
	End--;

	while(Start<=End)
	{
		Temp=*Start;
		*Start=*End;
		*End=Temp;

		Start++;
		End--;
	}
}

int main()
{
	char Str[20];

	printf("enter string\n");
	scanf("%[^'\n']s",Str);

	Reverse(Str);

	printf("%s\n",Str);

	return 0;
}
*/
/*
//copy string

#include<stdio.h>

void CopyString(char*Src,char*dest)
{
	while(*Src!='\0')
	{
		*dest=*Src;
		Src++;
		dest++;
	}
	*dest='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];

	printf("enter string\n");
	scanf("%[^'\n']s",Arr);

	//printf("enter string\n");
	//scanf("%[^'\n']s",Brr);

	CopyString(Arr,Brr);

	printf("%s\n",Arr);

	return 0;

}
*/
/*
//append string

#include<stdio.h>

void CopyString(char*Src,char*dest)
{
	while(*Src!='\0')
	{
	//	*dest=*Src;
		Src++;
		//dest++;
	}
	//Src--;
	
	//*Src=' ';
	//Src++;
	

	while(*dest!='\0')
	{
		*Src=*dest;
		Src++;
		dest++;
	}

	*Src='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];

	printf("enter string\n");
	scanf("%[^'\n']s",Arr);

	printf("enter string\n");
	scanf(" %[^'\n']s",Brr);

	CopyString(Arr,Brr);

	printf("%s\n",Arr);

	return 0;

}
*/

//copy string into another string

#include<stdio.h>

void copystring(char src[],char dest[])
{
	while(*src!='\0')
	{
		*dest=*src;
		
		if(*(src+1)=='\0')
		{
			dest++;
			break;
		}

		dest++;
		src=src+2;
	}

	*dest='\0';
}

int main()
{
	char arr[10]={'\0'};
	char brr[10]={'\0'};

	printf("enter string :\n");
	scanf("%[^'\n']s",&arr);

	copystring(arr,brr);

	printf("%s",brr);

	return 0;
}