#include<iostream>
using namespace std;

template<class T>
void Display(T*Arr,int iSize)
{
	int j=0,i=0,iCnt=0;

	for(i=0;i<iSize;i++)
	{
		
	}

	i--;

	for(j=i;j>=0;j--)
	{
		cout<<Arr[j]<<"\n";
	}
	
}

int main()
{
	
	int Arr[]={12,22,34,12,56,11,11,11};

	char Brr[]={'M','K','L','L','L'};

	Display(Arr,8);
	Display(Brr,5);
	

	return 0;
}