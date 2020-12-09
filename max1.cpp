//max.c

#include<stdio.h>

/////////////////////////////////////////////////
// name :        Maximum
// i/p  :        int,int
// o/p  :        int
// description : return largest
// author :      pooja
// date :        3/9/19
////////////////////////////////////////////////////

int Maximum(
	          int iNo1,
			  int iNo2
		   )
{ 
	if(iNo1>iNo2)
	{
		return iNo1;                                // without variable declaration write return iNo1
	}
	else
	{                                          
		return iNo2;                               // without variable declaration write return iNo1
    }
}

//entry point function - main

int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;

	printf("enter 1st number  :");
	scanf("%d", &iValue1);

	printf("enter 2nd number  :");
	scanf("%d", &iValue2);

	iRet=Maximum(iValue1,iValue2);

	printf("max number is %d \n",iRet);
	
	return 0;
}