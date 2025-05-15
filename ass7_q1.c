//write a program which accept the number from user and print * and # at that time of number
#include<stdio.h>
void Diplay(int iNo)
{
    int iCnt =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
        {
           for(iCnt =1; iCnt<=iNo;iCnt++)
            {
                printf("*\t",iCnt);
            }
        }
        for(iCnt =1; iCnt<=iNo;iCnt++)
        {
            printf("#\t",iCnt);
        }
        
}       
int main()
{
    int iValue =0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Diplay(iValue);

    return 0;
}