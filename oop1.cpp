#include<iostream>

using namespace std;

class Array
{
protected:
	int*Arr;
	int size;

public:
	Array(int value=10)
	{
		cout<<"Inside constructor\n";

		this->size=value;
		this->Arr=new int[size];
	}

	Array(Array &ref)
	{
		cout<<"inside copy constructor\n";

		this->size=ref.size;
		this->Arr=new int[this->size];

		for(int i=0;i<size;i++)
		{
			this->Arr[i]=ref.Arr[i];
		}
	}

	~Array()
	{
		cout<<"Inside destructor\n";

		delete[]Arr;
	}

	inline void Accept();
	inline void Display();
};

void Array::Accept()
{
	cout<<"Inside Accept\n";

	cout<<"enter the values\n";

	for(int i=0;i<this->size;i++)
	{
		cin>>Arr[i];
	}
}

void Array::Display()
{
	cout<<"Inside Display\n";

	cout<<"elements are\n";

	for(int i=0;i<this->size;i++)
	{
		cout<<Arr[i]<<" ";
	}
	cout<<"\n";
}

class ArrSearch:public Array
{
public:
	ArrSearch(int no=10):Array(no)
	{}

	int Frequency(int);
	int SearchFirst(int);
	int SearchLast(int);
	int EvenCount();
	int OddCount();
	int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
	cout<<"inside SearchFirst\n";

	int i=0;

	for(i=0;i<size;i++)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}

	if(i==size)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int ArrSearch::Frequency(int value)
{
	int icnt=0;

	cout<<"Inside Frequency\n";

	for(int i=0;i<size;i++)
	{
		if(Arr[i]==value)
		{
			icnt++;
		}
	}

	return icnt;
}

int ArrSearch::SearchLast(int value)
{
	int i=0;

	cout<<"inside SearchLast\n";

	for(i=this->size;i>0;i--)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}

	if(i<0)
	{
		return -1;
	}
	else
	{
		return i;
	}

}

int ArrSearch::EvenCount()
{
	int i=0,icnt=0;

	cout<<"Inside EvenCount\n";

	for(i=0;i<size;i++)
	{
		if((Arr[i]%2)==0)
		{
			icnt++;
		}
	}

	return icnt;
}

int ArrSearch::SumAll()
{
	int i=0,iSum=0;

	cout<<"Inside SumAll\n";

	for(i=0;i<size;i++)
	{
		iSum=iSum+Arr[i];
	}

	return iSum;
}

int ArrSearch::OddCount()
{
	int i=0,icnt=0;

	cout<<"Inside oddcount\n";

	for(i=0;i<size;i++)
	{
		if((Arr[i]%2)!=0)
		{
			icnt++;
		}
	}

	return icnt;
}

int main()
{
	cout<<"inside main\n";

	ArrSearch sobj1(7);
	sobj1.Accept();
	sobj1.Display();

	int iRet=0;
	
	iRet=sobj1.Frequency(11);

	cout<<"Frequency is"<<iRet<<"\n";

	iRet=sobj1.SearchFirst(11);

	cout<<"First occurance is"<<iRet<<"\n";

	iRet=sobj1.SearchLast(22);

	cout<<"Last occurance is "<<iRet<<"\n";

	
	iRet=sobj1.EvenCount();

	cout<<"even count is "<<iRet<<"\n";

	
	iRet=sobj1.OddCount();

	cout<<"Odd Count is "<<iRet<<"\n";

	
	iRet=sobj1.SumAll();

	cout<<"sum of all is "<<iRet<<"\n";

	return 0;
}

