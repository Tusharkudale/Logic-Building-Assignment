//Accept the number of rows and columns from user and display below pattern 
/*
    input :  iRow = 4       iCol = 5

    Output :    a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
                1   2   3   4   5
                a   b   c   d   e
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;
        int iCnt1 = 0;
        char ch ='\0';

        for(i = 1; i <= iRow ; i++)
        {
            for(j = 1,iCnt1 = 1 ,ch = 'a' ; j <= iCol;j++,iCnt1++,ch++)
            {
                
                    if( i % 2 == 0)
                    {
                        System.out.print(iCnt1+"\t"); 
                    }   
                
                    else
                    {
                        System.out.print(ch+"\t");
                    }    
                
            }
             
         System.out.println();
        }
    }
}

class ass14_q3
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