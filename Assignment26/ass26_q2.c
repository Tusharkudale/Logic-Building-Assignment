//Write a program which accept string from user and accept one character,Return frequency of that character.
//(case Insesitive)
#include<stdio.h>

int CountChar(char *str,char ch)
{
    int iFrequency = 0;
    int iDisplacement = 0;
    
       if((ch >= 'A') && (ch <= 'Z'))  
    {
        iDisplacement = 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        iDisplacement = -32;
    } 
    else
    {
        iDisplacement = 0;
    } 

    while( *str != '\0')
    {
        
            if((*str == ch ) || (*str == ch + iDisplacement))
            {
                iFrequency++;
            }
        
        str++;
    }
    return iFrequency;    
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

    iRet = CountChar(arr,cValue);

    printf("Frequency of character:%d",iRet);
    

    return 0;


}