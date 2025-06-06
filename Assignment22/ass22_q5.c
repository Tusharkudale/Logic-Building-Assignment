//Accept division of student from user and depends on the division display exam timing.There are 4 division in school as A,B,C,D.
//Exam of division A at 7 AM, B at 8:30 AM, C at 9.20 AM and D at 10.30 AM.(Application should be case insensitive)

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Exam of Division A at 7 AM");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Exam of Division B at 8:30 AM");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Exam of Division C at 9:20 AM");
    }else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Exam of Division D at 10:30 AM");
    }
}

int main()
{
    char cValue = '\0';
    
    
    printf("Enter your Division:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}