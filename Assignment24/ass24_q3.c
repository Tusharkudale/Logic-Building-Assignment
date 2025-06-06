//Write a Program which accept string from user and return difference between frequency of small character and frequcency of capital character

#include<stdio.h>

int Difference( char *str)
{
    int iCnt = 0,iCount1 = 0,iCount2 = 0,iSum1 = 0,iSum2 = 0;

    if( str == NULL || *str <= 0)
    {
        printf("Invalid input");
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount2++;
        }
        str++;
    }
    return iCount1 - iCount2;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}