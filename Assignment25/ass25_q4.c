//write a program which accept string from user and display only digit from that string

#include<stdio.h>

void DisplayDigit(char *str)
{
    
    while( *str != '\0')
    {    
        if( *str >= '0' && *str <= '9' )
        { 
            printf("%c",*str);
        }
        str++;  
    }
}

int main()
{
    char arr[20];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}