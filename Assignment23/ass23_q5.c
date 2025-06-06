//Accept character from user and display its ASCII value in decimal,octal and hexadecimal format

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("Character:%c\nDecimal:%d\nOctal:0%o\nHexadecimal:0X%x",ch,ch,ch,ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}