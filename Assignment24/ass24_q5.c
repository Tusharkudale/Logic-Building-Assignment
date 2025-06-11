//write a program which accpet string from user and display it in reverse order

#include<stdio.h>

void Reverse(char *str)
{
    int iCnt = 0,iCount = 0;

    while( *str != 0)
    {
        iCount++;
        str++;
    }
    str--;

    for(iCnt = iCount;iCnt >= 0;iCnt--,str--)
    {
        printf("%c",*str);
    }
    printf("\n");
    
}
int main()
{
    char arr[20];
    
    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}