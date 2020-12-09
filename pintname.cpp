#include<stdio.h>

int main()
{
	char Name[30];     //char string strenth=30(if it is 10 i will give run time error as stack)

	printf("enter name\n");
	scanf("%s",&Name);

	printf("your name is \n %s\n",Name);

	return 0;
}