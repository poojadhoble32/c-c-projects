//SumMultDif

//accept number and return diff betw sum of all its fact and non fact 

#include<stdio.h>

int FactDiff(int iNo)
{
	int iFcnt=0,iNfcnt,iFsum=0,iNfsum=0,iDiff=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iFcnt=1;iFcnt<iNo;iFcnt++)
	{
		if((iNo%iFcnt)==0)
		{
			iFsum=iFsum+iFcnt;
		}
	}

	for(iNfcnt=1;iNfcnt<iNo;iNfcnt++)
	{
		if((iNo%iNfcnt)!=0)
		{
			iNfsum=iNfsum+iNfcnt;
		}
	}

	iDiff=iFsum-iNfsum;

	return iDiff;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("enter number \n");
	scanf("%d",&iValue);

	iRet=FactDiff(iValue);

	printf("difference is %d",iRet);

	return 0;
}


