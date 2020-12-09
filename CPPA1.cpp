#include<stdio.h>

void fun()
{
	printf("inside fun \n");
}

int gun(int No1,int No2)
{
	int ans=0;
	ans=No1+No2;
	return ans;
}

struct demo
{
	void(*p)();
	int(*q)(int,int);
}obj;

int main()
{
	int ret=0;
	obj.p=fun;
	obj.q=gun;

	ret=obj.q(6,5);
	printf("%d\n",ret);

	obj.p();

	return 0;
}