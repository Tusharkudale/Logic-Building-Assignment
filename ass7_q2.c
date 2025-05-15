//Accept amount in us dollar and return its corresponding value in Indian currency.Consider 1$ as 70 rupees.

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iMul=0;
    {
        iMul = iNo*70;
    }
    return iMul;
}
int main()
{
    int iValue =0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is:%d",iRet);

    return 0;
}