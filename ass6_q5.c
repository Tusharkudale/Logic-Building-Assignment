//Wirte a program which accept a number from user and display its table in reverse

#include<stdio.h>
void Table(int iNo)
{
    int iCnt=0;
    int iMul=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=10;iCnt >=1 ; iCnt--)
    {
        iMul = iNo * iCnt;
        {
            printf("%d\t",iMul);
        }
    }
    
}
int main()
{
    int iValue =0;
   

    printf("Enter Number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}