//Write a program which accept the  N number from user and print first 5 multiple of N 

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0,iMul=0;

    for(iCnt=1;iCnt<=5; iCnt++)
    {   
        iMul = iNo *iCnt;
        {
           printf("%d\t",iMul);
        }
    }
  
}
int main()
{
    int iValue =0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}