//Write a program which accept a Distance in Kilometer and convert it into Meter(1 km =1000mtr)
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMult =0;
    
    {
        iMult =  iNo *   1000;
    }
    return iMult;
} 
int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter Distance in Kilometer:");
    scanf("%d",&iValue);



    iRet = KMtoMeter(iValue);

    printf("Converted  KM to Meter:%d",iRet);

    return 0;
}