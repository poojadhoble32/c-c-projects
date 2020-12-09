/*//auto,register

#include<stdio.h>
 
void fun()
{
	auto i=10;
	//printf("using auto storage class\n");
}

int main()
{
	int no=10;
	auto  x=0;

	//printf("%d",x);

	x=10;

	//printf("%d",x);


	register double k=0.0;

	k=10.20;

	int d=199/8;

	printf("%lf",k);

	fun();

	return 0;
}
*/
/*
//static

#include<stdio.h>

static int i=30;

void fun()
{
	static int a=10;

	printf("%d\n",a);

	printf("%d\n",i++);

	a++;
}

int main()
{
	fun();
    fun();
	fun();
	return 0;
}
*/

//extern

#include<stdio.h>
extern int i;

void fun()
{
	printf("inside fun\n");
    printf("%d",i);
}

int main()
{
	fun();
	return 0;
}