#include<stdio.h>

int Reverse(int iNo)
{
	//static int iLarge=0;
	 int iDigit=0;
	static int iDigit1=0;

	//if(*Str!='\0')
	//{
		if(iNo!=0)
		{
		//iArr++;
		iDigit=iNo%10;
		if(iDigit>iDigit1)
		{
			iDigit1=iDigit;
		}
		//iSum=iSum+iDigit;
		//printf("%c\n",iSize);
		//iSize++;
		//iCnt++;
		//}
		//Str++;
		iNo=iNo/10;
		Reverse(iNo);
	}
	return iDigit1;
}

int main()
{
	//char Arr[10];
	int iNo=0,iRet=0;

	printf("enter number\n");
	scanf("%d",iNo);

//	for(i=0;i<iSize;i++)
	//{
	//	scanf("%d",&Arr[i]);
	//}

	iRet=Reverse(iNo);

	printf("%d\n",iRet);

	return 0;
}