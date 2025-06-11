//Write a program which accpet string from user and reverse that string in place

#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    int temp = 0;

    start = str ;
    end = str ;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Modified string is:%s",Arr);

    return 0;
}