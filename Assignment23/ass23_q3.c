//Accept character from  user.If it is capital then display all the character from the input character till Z.
//If input character is small then print all the character in reverse order till a.In other cases return directly

#include<stdio.h>

void Display(char ch)
{
    char iCnt = 0 ;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt = ch;iCnt <= 'Z' ;iCnt++)
        printf("%c\t",iCnt);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt = ch ;iCnt >= 'a';iCnt--)
        printf("%c\t",iCnt);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character :");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}