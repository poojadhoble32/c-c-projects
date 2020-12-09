#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo1,int iPos1,int iPos2)
{
	int iMask1=0,iMask2=0,i=0;
	int iResult1=0,iResult2=0,iResult3=0,iCnt=1;

	if((iPos1<1)||(iPos1>32)||(iPos2<1)||(iPos2>32))
	{
		return -1;
	}

		iMask1=0x00000001;
		iMask2=0x00000001;

//	iMask=iMask<<(iPos-1);

	//iResult=iNo^iMask;

	//if(iResult!=iMask)
	//{
	//	iChange=iNo^iMask;
	//	return iChange;
	//}
	//else
	//{
       // return iResult;
	//}
		//for(i=1;i<32;i++)
		//{
		       iMask1=iMask1<<(iPos1-1);
			   iMask2=iMask2<<(iPos2-1);
			
		       iResult1=iNo1&iMask1;
			   iResult2=iNo1&iMask2;

				if((iResult1==iMask1)||(iResult2==iMask2))
				{
					
					return TRUE;
					
				}
				else
				{
					return FALSE;
				}
				//iCnt++;
			   
		//}
}

int main()
{
	int iValue1=0,iValue2=0,iPos1=0,iPos2=0;
	BOOL iRet=FALSE;

	printf("Enter num1\n ");
	scanf("%d",&iValue1);

	printf("enter position\n");
	scanf("%d\t%d",&iPos1,&iPos2);

	iRet=ChkBit(iValue1,iPos1,iPos2);

	if(iRet==TRUE)
	{
		printf("bit is on");
	}
	else
	{
	    printf("bit is off");
	}
    return 0;
}


