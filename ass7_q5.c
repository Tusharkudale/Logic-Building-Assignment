//Write a program which returns difference between even and Odd factorial of given number
#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt =0;
    int iMul =1;
    int iMul1 =1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    {
        for(iCnt =1;iCnt <=iNo;iCnt++)
       if(iCnt % 2 ==0)
        {
            iMul = iMul * iCnt;
        }
    }
        for(iCnt =1;iCnt <=iNo;iCnt++)
    {
        if((iCnt % 2)==1)
        {
           iMul1 = iMul1 * iCnt; 
        }
    }
       
    
        return iMul-iMul1;
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is:%d",iRet);

    return 0;
}