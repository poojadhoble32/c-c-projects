// ADDITION.C

/////////////////////////////////////////////////////////////
// statement : application to perform addition of two nos
////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////
// Name :         Addition
// input :        float,float
// output :       float
// description :  it is use to perform addition
// author :       Pooja Rohidas Dhoble.
// date :         29/08/2019
///////////////////////////////////////////////

float Addition(                                       //function definition //colly
	               float fNo1,                        
				   float fNo2
			  )
{
	 float fAns=0.0;
     fAns=fNo1+fNo2;
	 return fAns;
}

/////////////////////////////
// entry point function
////////////////////////////

int main()
{
	 float fValue1=0.0;
	 float fValue2=0.0;
	 float fRet=0.0;

	 fValue1=10.5;
	 fValue2=6.0;
     fRet=Addition(fValue1,fValue2);                 //funtion call

     printf("addition is = %f\n",fRet);

	 return 0;
}
