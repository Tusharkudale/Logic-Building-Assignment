//Write a program which accept string from user and convert it into lower case
#include <stdio.h>

void strlwrx(char *str)
{
    char ch = '\0';
    while(*str != '\0')
    {
        if(( *str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}


int main()
{
    char Arr[50];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

   printf("Modified string is:%s",Arr);

    return 0;
}