//Write a program which accpet string from user and count number of white spaces

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while( *str != 0)
    {
        if(*str == ' ' )
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("white Spaces are :%d",iRet);

    return 0;
}