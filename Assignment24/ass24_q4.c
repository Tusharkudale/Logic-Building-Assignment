//Write a Program which accept string from user and check whether it contains vowels in it or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL ;

int ChkVowels(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return TRUE;
        }
       
        str++;
    }
   
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowels(arr);
    if(bRet == TRUE)
    {
        printf("String contains vowels");
    }
    else
    {
        printf("There is no vowels in String");
    }

    return 0;
}