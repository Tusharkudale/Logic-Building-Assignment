//Write a program which display ASCII table.Table contains 
// Symbol,Decimal,Hexadecimal and octal representation of every member from 0 to 255.

#include<stdio.h>
#include<ctype.h>
void DisplayASCII()
{
    char ch = '\0';
    int iCnt = 0;
        printf("---------------------------");
        printf("\n| CHAR | DEC | HEX |  OCT |");
        printf("\n---------------------------");
    for(iCnt = 0;iCnt <= 255;iCnt++)
    {
        printf("\n%c|\t%d|\t%X|\t%o|\t",iCnt,iCnt,iCnt,iCnt);
    }
}
int main()
{
    DisplayASCII();

    return 0;
}