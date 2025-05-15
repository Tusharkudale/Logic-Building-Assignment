//Write a program to find a factorial of the number

#include<stdio.h>
int Factorial(int iNo)
{
    long int iCnt=0;
    long iFact=1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt <=iNo ; iCnt++)
    {
        iFact=iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue =0;
    long iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is:  %d",iRet);

    return 0;
}