//Write a program which accept a number from user and return difference between all its Summation of non factors and factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt =0, iSum=0,iSum1=0,Diff=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
       if((iNo % iCnt)==0)
       {
        iSum =iSum + iCnt;
       }
       else 
       {
        iSum1 = iSum1 + iCnt;
       }
       
    }
    {
        Diff=iSum-iSum1;
    }  
    return Diff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference between Factors and Non Factors are:%d",iRet);

    return 0;
} 