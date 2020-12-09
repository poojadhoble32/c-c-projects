#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
	int iMult=0;

	if((iNo1==0)||(iNo2==0)||(iNo3==0))
	{
		iMult=0;
	}
	//else
	//if((iNo1>=1)||(iNo2>=1)||(iNo3>=1))
	//{
	//iMult=((iNo1*iNo2)*iNo3);
	//}

	iMult=iNo1*iNo2*iNo3;

	return iMult;
}

int main()
{ 
	int iValue1=0,iValue2=0,iValue3=0,iRet=0;

	printf("enter three numbers\n");
	scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

	iRet=Multiply(iValue1,iValue2,iValue3);

	printf("multiplication is \n %d",iRet);

	return 0;
}
