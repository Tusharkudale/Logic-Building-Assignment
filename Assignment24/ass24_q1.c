//Write a program which accept string from user and count number of capital character

#include<stdio.h>

int CountCapital( char *str)
{
    int iCnt = 0,iCount = 0;

    if( str == NULL || *str <= 0)
    {
        printf("Invalid input");
        return -1;
    }
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("%d",iRet);

    return 0;
}