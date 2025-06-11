//Write a program which accept string from user and copy the contents 
// of that string into another string(Implement strcpy() function)

#include<stdio.h>

void StrCpyX(char *src ,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = {'\0'};  //Empty String

    StrCpyX(Arr,Brr);

    printf("%s",Brr);       //Expected output: Marvellous Multi OS

    return 0 ;
}