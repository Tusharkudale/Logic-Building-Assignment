//Accept the number of rows and columns from user and display below pattern 
/*
    input :  iRow = 4       iCol = 5

Output :   4    4    4    4    4    
           3    3    3    3    3
           2    2    2    2    2    
           1    1    1    1    1                
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0 ,j = 0;
        
        for(i = iRow; i >= 1; i--)
        {
            for(j = 1 ;j <= iCol; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
        
    }
}
class ass13_q4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
    }
}