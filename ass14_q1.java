//Accept the number of rows and columns from user and display below pattern 
/*
    input :  iRow = 4       iCol = 4

    Output :    1   2   3   4
                5   6   7   8
                9   1   2   3
                4   5   6   7
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;
        int iCnt1 = 0;

        for(i = 1 ,iCnt1 = 1; i <= iRow ; i++)
        {
            for(j = 1 ; j <= iCol;j++,iCnt1++)
            {
                if(iCnt1 > 9)
                {
                    iCnt1 = 1;
                }
                if(iCnt1 <= 9)
                {
                    System.out.print(iCnt1+"\t");    
                }
                
            }
             
             System.out.println();
        }
    }
}

class ass14_q1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0 , iValue2 = 0;

        System.out.println("Enter number of rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns: ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);

    }
}