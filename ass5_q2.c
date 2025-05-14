//Write a program which accept the number from user and print that numbers till that number on screen 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = iNo;
    }

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue =0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}