//Write a program which accept a Temperature into Fahrenhiet and convert it into Celcius(1 celsius =(Fahrenheit -32 )*(5/9))
#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius=0.0;
    {
        fCelsius = ((fTemp - 32) * 5/9);
    }
    return fCelsius;
} 

int main()
{
    float fValue =0.0;
    double dRet =0.0;

    printf("Enter Temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Converted  Fh to Cs :%.4f",dRet);

    return 0;
}