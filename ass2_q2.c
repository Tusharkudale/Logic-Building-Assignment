//Accept one number from user and print that number of * on screen
#include<stdio.h>
void Display(int iNo)
{
    int iCnt =0;
    if(iNo<=0)
    {
        return;
    }
    while(iNo>iCnt)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}