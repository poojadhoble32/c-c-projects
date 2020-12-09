#include<stdio.h>

int TouristBill(int iKilometer)
{
	int iCnt=0,iRs=0,iTotal=0;

	
			if(iKilometer<=100)
			{
				for(iCnt=1;iCnt<=iKilometer;iCnt++)
		        {  
				     iRs=25;
                     iTotal=iTotal+iRs;
				}
		    }
			    else if(iKilometer>100)
			    {
				for(iCnt=1;iCnt<=iKilometer;iCnt++)
		            {  
				       iRs=15;
                       iTotal=iTotal+iRs;
				    }
			    }
	
	return iTotal; 
}

int main()
{
	int iValue=0,iRet=0;

	printf("enter killometer\n");
	scanf("%d",&iValue);

	iRet=TouristBill(iValue);

	printf("%d",iRet);

	return 0;
}

			