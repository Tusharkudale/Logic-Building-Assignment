//Write a program which accept number from user and return Difference between summation of even digits and summation of odd digits 

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit =0;
    int iCnt =0;
    int iSum=0,iSum1=0;
    if(iNo <0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit %2)==0 )
        {
            iSum = iSum + iDigit;
        }
        if((iDigit %2)==1 )
        {
            iSum1 = iSum1 + iDigit;
        }
        iNo = iNo / 10;
        
    }
    return iSum-iSum1;
}

int main()
{
    int iValue =0;
    int iRet =0 ;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);
    return 0;
}