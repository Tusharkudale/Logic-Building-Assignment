//Write a program which accept string from user and copy small 
//character of that string into another string

#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    while(*src != 0)
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[30] = "Marvellous multi OS";
    char Brr[30] = {'\0'};  //Empty String

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);       //Expected output: arvellous multi

    return 0 ;
}