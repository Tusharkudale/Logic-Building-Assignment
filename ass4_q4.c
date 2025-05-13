//Write a program which accept a number from user and return Summation its all non factors 

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt =0, iSum=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum = iSum + iCnt;
        }    
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of non Factor are:%d",iRet);

    return 0;
} 