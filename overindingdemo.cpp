#include<iostream>

using namespace std;

class first
{
public:
	int i,k;

	first(int i,int k)
	{
		this->i=i;
		this->k=k;
	}

	void fun()
	{
		cout<<"first fun i,k is:"<<i<<","<<k;
	}
};

class second:public first
{
public:
	second()
	{
	}

	void fun()
	{
		cout<<"second fun i,k is"<<i;
	}
};

class third:public second
{
public:
	void gun()
	{
		cout<<"third gun: i,k"<<i;
	}
};

int main()
{
	int i=0;
	cout<<"enter i value";
	cin>>i;
	cout<<"i value is:"<<i;

	first objf(20,89);
	second objs();
	third objt();

	objs.fun();
	/*first *fp=NULL;
	second *sp=NULL;
	third *tp=NULL;

	fp=&objs;

	fp->fun();*/
}
