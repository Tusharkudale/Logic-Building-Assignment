//Write a program which accept area in square feet and convert it into square meter(1 square_feet = 0.0929 square meter)
#include<stdio.h>

double SquareMeter(int iNo)
{
    float fSquareMeter=0.0;
    {
        fSquareMeter = iNo * 0.0929;
    }
    return fSquareMeter;
} 

int main()
{
    int iValue =0;
    double dRet =0.0;

    printf("Enter are in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Converted  sqaure feet to square meter :%f",dRet);

    return 0;
}