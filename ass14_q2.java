//Accept the number of rows and columns from user and display below pattern 
/*
    input :  iRow = 4       iCol = 5

    Output :    2   4   6   8   10
                1   3   5   7   9
                2   4   6   8   10
                1   3   5   7   9
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;
        int iCnt1 = 0;

        for(i = 2,iCnt1 = 1 ; i <= (iRow)+1 ; i++)
        {
            for(j = 2 ; j <= (2*iCol)+1;j++,iCnt1++)
            {
                
                    if( i % 2 == 0)
                    {

                        if(iCnt1 % 2 == 0)
                        {
                            System.out.print(iCnt1+"\t"); 
                        }   
                    }                
                    else if( i % 2 != 0)
                    {
                        if(iCnt1 % 2 != 0)
                        {
                            System.out.print(iCnt1+"\t");
                        }    
                    }
            }
             System.out.println();
            iCnt1 = 1;
        }
       
    }
}

class ass14_q2
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