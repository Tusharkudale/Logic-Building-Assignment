//Write a program which accept string from user and copy capital 
//character of that string into another string

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    while(*src != 0)
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[30] = "Marvellous Multi OS";
    char Brr[30] = {'\0'};  //Empty String

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);       //Expected output: MMOS

    return 0 ;
}