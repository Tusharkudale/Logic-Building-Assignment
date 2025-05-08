//Accept one character  from user and convert case of that character
#include<stdio.h>
void DisplayConvert(char cValue)
{
    //char ch='\0';
    if(cValue>='a'&& cValue<='z')
    {
        printf("%c",cValue=cValue-32);
    }
    else if(cValue>='A' && cValue<='Z')
    {
        printf("%c",cValue=cValue+32);
    }
}
int main()
{
    char cValue1='\0';
    
    printf("enter character:");
    scanf("%c",&cValue1);

    DisplayConvert(cValue1);

    return 0;
}