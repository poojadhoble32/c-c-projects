#include<stdio.h>

void Reverse(char*Src,char*Dest)
{
	if((Src==NULL)||(Dest==NULL))
	{
	   printf("mem problem");
	   return ;
	}

	//while(*Src!='\0')
	//{
		//Src++;
	//}
	//Src--;
	

	while(Src!='\0')
	{
		if(*Src!=' ')
		{
		   *Dest=*Src;
		   Dest++;
		}
		Src++;
	}

	*Dest='\0';
}

int main()
{
	char Arr[30];
	char Brr[30];

	
    printf("enter 1st string\n");
	scanf("%[^'\n']s",Arr);

	//printf("enter 2nd string\n");
	//scanf(" %[^'\n']s",Brr);


	Reverse(Arr,Brr);

	printf("%s",Brr);

	return 0;
}