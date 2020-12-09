#include<stdio.h>

//typedef int BOOL;
typedef unsigned int UINT;

//#define TRUE 1
//#define FALSE 0

int ChkBit(UINT iNo)
{
	int iMask=0;
	int iResult=0,iChange=0;

	iMask=0x00000040;

	iResult=iNo&iMask;

	if(iResult==iMask)
	{
		iChange=iNo^iMask;
		return iChange;
	}
	else
	{
		return iNo;
	}
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter num\n");
	scanf("%d",&iValue);

	iRet=ChkBit(iValue);

	if(iRet==iValue)
	{
		printf("bit is off so num is %d",iRet);
	}
	else
	{
	    printf("updated no is %d\n",iRet);
	}
    return 0;
}


