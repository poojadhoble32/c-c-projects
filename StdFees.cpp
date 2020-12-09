//standardwise fees
/*

#include<stdio.h>
  
int StdFees(int iNo)
{
	int iAns=0;

	switch(iNo)
	{
	case 1:
		iAns=1000;
		//return iAns;
		break;
	case 2:
		iAns=2000;
		//return iAns;
		break;
	case 3:
		iAns=3000;
		//return iAns;
		break;
	case 4:
		iAns=4000;
		//return iAns;
		break;
	default :
		printf("wrong input\n");
		//return iAns;
	}

	return iAns;
	
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter standard :\n");
	scanf("%d",&iValue);

	iRet=StdFees(iValue);

	printf("%d",iRet);

	return 0;
    
}

*/
//tax
/*
#include<stdio.h>
  
int StdFees(int iNo)
{
	int iAns=0;

	if(iNo<=500000)
	{
		iAns=0;
        //return iAns;
	}
	else if((iNo>500000)&&(iNo<=1000000))
	{
		iAns=(iNo*10)/100;
		//return iAns;
	}
	else if((iNo>1000000)&&(iNo<=2000000))
	{
		iAns=(iNo*20)/100;
		//return iAns;
	}
	else
	{
		iAns=(iNo*30)/100;
		//return iAns;
	}
	return iAns;
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter standard :\n");
	scanf("%d",&iValue);

	iRet=StdFees(iValue);

	printf("%d\n",iRet);

	return 0;
    
}
*/


//kellometer

#include<stdio.h>
  
int KLmeter(int iNo)
{
	int iAns=0;

	if(iNo<=100)
	{
		iAns=iNo*25;
        //return iAns;
	}
	else
	{
		iAns=iNo*15;
		//return iAns;
	}
	return iAns;
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter kilometer :\n");
	scanf("%d",&iValue);

	iRet=KLmeter(iValue);

	printf("%d\n",iRet);

	return 0;
    
}
