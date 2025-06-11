//Write a program which accept string from user and accept one character,Return index of the Last occurance of character.

#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iCnt = 0;
    
   for(iCnt = ch;iCnt >= 0;iCnt--)
    {      
        if( str[iCnt] == ch)
        {
            break;
        }
    }
    return iCnt;    
}
int main()
{
    char arr[20];
    char cValue = '\0' ;
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    printf("Enter Character:");
    scanf(" %c", &cValue);

    iRet = LastChar(arr,cValue);

    printf("Location of character:%d",iRet);
    

    return 0;


}