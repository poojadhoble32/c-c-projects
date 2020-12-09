#include<iostream>
using namespace std;

class T
{
public:
	int value1;
	int value2;
	int Ans;

	T(int iNo1,int iNo2)
	{
		iNo1=value1;
		iNo2=value2;
		Ans=0;
	}

	int Multiply(int,int);
}

int T::Multiply(int iNo1,int iNo2)
{
	Ans=iNo1*iNo2;

	return Ans;
}

int main()
{
	int No1=0,No2=0;

	cout<<"enter two values=";
	cin>>No1>>No2;

	T obj1(No1,No2);

	int iRet=obj1.Multiply();

	cout<<"Multiplication is:"<<iRet<<"\n";

//	float iRet=Multiply(10.0f,20.0f);

//	cout<<"Multiplication is:"<<iRet<<"\n";

	return 0;
}