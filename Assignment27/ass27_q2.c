//Write a program which accept string from user and copy the contents
// of that string into another string.(Implement strncpy() function)

#include<stdio.h>

void StrNCpyX(char *src ,char *dest,int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = {'\0'};  //Empty String

    StrNCpyX(Arr,Brr,10);

    printf("%s",Brr);       //Expected output: Marvellous

    return 0 ;
}