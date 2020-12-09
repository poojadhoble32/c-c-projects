int MaxNoThree(int iNo1,int iNo2,int iNo3)
{
	int iAns=0;

	if((iNo1>iNo2)&&(iNo1>iNo3))
	{
		return iNo1;
	}
	else if((iNo2>iNo1)&&(iNo2>iNo3))
	{
		return iNo2;
	}
	else
	{
		return iNo3;
	}
}