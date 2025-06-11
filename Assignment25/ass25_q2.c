//Write a program which accept string from user and convert it into upper case 
#include <stdio.h>

void struprx(char *str)
{
    
    while(*str != '\0')
    {
        if(( *str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
        
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    struprx(Arr);

   printf("modified String is:%s",Arr);

    return 0;
}