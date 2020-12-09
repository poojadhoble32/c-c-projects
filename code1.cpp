#include<iostream>

using namespace std;

class first
{
public:
	int i;
	
	first()
	{
	}
	
	first(int i)
	{
		this->i=i;
	}

	first(first &ref)
	{
		i=ref.i;
	}

	void fun()
	{
		cout<<"inside fun i value is:"<<i;
	}

	void display(int iNo)
	{
		int idigit=0;
		
		while(iNo>0)
		{
			idigit=iNo%2;
			
			cout<<idigit;

			iNo=iNo/2;
		}
	}
};

int main()
{
	int ivalue=0;
	first obj;
	first obj1(20);
	first obj2(obj1);
	 
	cout<<"enter value:";
	cin>>ivalue;

	obj.display(ivalue);
	obj.fun();
	obj1.fun();
	obj2.fun();

	return 0;
}
