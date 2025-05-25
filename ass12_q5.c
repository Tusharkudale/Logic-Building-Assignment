//Accept the number of rows and columns from user and Display below pattern
/*
    input :     iRows= 3   iCols= 4
    Output:
            1   1   1   1
            2   2   2   2
            3   3   3   3
            4   4   4   4   
           
*/

#include<stdio.h>

void Pattern(int iRows, int iCols)
{
    int i = 0,j = 0;
    
    for(i = 1; i <= iRows ; i++)
    {
        for(j = 1;j<=iCols; j++)
        {
            printf("%d\t",i);
        }
         printf("\n");
    }
   
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;
    printf("Enter number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&iValue2);
    
    Pattern(iValue1,iValue2);

    return 0;
}