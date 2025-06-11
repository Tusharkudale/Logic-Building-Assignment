//Write a program which accept 2 strings from user and concat second string after first string(Implement strcat() function)

#include<stdio.h>

void StrCpyX(char *src ,char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0')
    {
        *src = *dest;
        src++; 
        dest++;
    }

    *src = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = " Logic Building";  //Empty String

    StrCpyX(Arr,Brr);

    printf("%s",Arr);       //Expected output: Marvellous Multi OS

    return 0 ;
}