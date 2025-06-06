//Accept character from user .If character is small display its corresponding capital character
//  and if it small then display its corresponding capital.In other cases display as it is.

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 97 && ch <= 122)
    {
        printf("Character is %c",ch = ch - 32);
    }
    else if(ch >= 65 && ch <= 90)
    {
        printf("Character is %c",ch = ch + 32);
    }
    else
    {
        printf("%c",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the Character:");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
