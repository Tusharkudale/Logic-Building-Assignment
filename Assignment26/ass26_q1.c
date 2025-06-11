//Write a program which accpet string from user and accept one character.
// Check whether that character is present in string or not.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    BOOL bFlag = FALSE;
    while( *str != '\0')
    {
        if( *str == ch)
        {
            bFlag=TRUE;
        }
        str++;
    }
    return bFlag;
        
}
int main()
{
    char arr[20];
    char cValue = '\0' ;
    BOOL bRet = FALSE;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    printf("Enter Character:");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("It contains Character");
    }
    else
    {
        printf("It Does not Contains character");
    }

    return 0;


}
