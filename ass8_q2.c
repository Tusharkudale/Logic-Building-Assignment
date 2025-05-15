//Write a program which accept a Height and Width of Rectangle from user and calculate its area (Area = Height * Width)
#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double dArea =0.0;
    float PI =3.14;
    {
        dArea =  fWidth *   fHeight ;
    }
    return dArea;
} 
int main()
{
    float fValue1 =0.0;
    float fValue2 =0.0;
    double dRet =0.0;

    printf("Enter Width:\t");
    scanf("%f",&fValue1);

    printf("Enter Height:\t");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is:%.3f",dRet);

    return 0;
}