//Write a program which accept a number from user and display its multiplication of factors

#include<stdio.h>

int MulFact(int iNo)
{
    int iMul = 1,iCnt =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iMul = iMul * iCnt; 
        }    
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("Multiplication of Factors is %d",iRet);

    return 0;
}