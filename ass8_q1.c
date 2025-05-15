//Write a program which accept a radius from user and calculate its area (Consider PI value 3.14(Area = PI*Radius*Radius))
#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea =0.0;
    float PI =3.14;
    {
        dArea = PI * fRadius * fRadius;
    }
    return dArea;
} 
int main()
{
    float fValue =0.0;
    double dRet =0.0;

    printf("Enter Radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is:%.4f",dRet);

    return 0;
}