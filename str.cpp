#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
#define FAIL 0

BOOL StrCat(char*Src,char*Dest,int iCnt)
{
	//int iCnt1=0;
	//char iStart[30];
	//char iEnd[30];
	if((Src==NULL)||(Dest==NULL))
	{
	   printf("mem problem");
	   return FALSE ;
	}


	//while(*Dest!='\0')
	//{
	////	Dest++;
		//iCnt1++;
	//}
		while((*Src!='\0')&&(*Dest!='\0')&&(iCnt!=0))
	{
		
		   if(*Src!=*Dest)
		   {
			
			  break;
		   }
		//*Src=*Dest;
		iCnt--;
		      Dest++;
		
		Src++;
	
	}


	if(iCnt==0)
	{
		return TRUE;
	}
	else if(iCnt!=Dest[iCnt])
	{
		return FALSE;
	}
	else
	{
		return FAIL;
	}
	
	//*Src='\0';
}

int main()
{
	BOOL iRet=FALSE;
	char Arr[30];
	char Brr[30];
	int iCnt=0;
	
    printf("enter 1st string\n");
	scanf("%[^'\n']s",Arr);

	printf("enter 2nd string\n");
	scanf(" %[^'\n']s",Brr);

	printf("enter count");
	scanf("%d",&iCnt);

    iRet=StrCat(Arr,Brr,iCnt);

	if(iRet==FALSE)
	{
		printf("not");
	}
	else if(iRet==TRUE)
	{
		printf("same");
	}
	else
	{
		printf("high icnt than dest");
	}

	return 0;
}