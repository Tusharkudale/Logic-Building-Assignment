//Accept rows and columns  from user and print below pattern
/*
input : 5   5

output: *   *   *   *   *
        *   @   @   @   *
        *   @   @   @   *
        *   @   @   @   *
        *   *   *   *   *
*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0,j = 0;

        for(i = 1 ;i <= iRow ; i++)
        {
            for(j = 1; j <= iCol;j++)
            if((i == 1 || i == iRow) || (j ==1 || j==iCol))
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print("@\t");
            }
             System.out.println();
        }
       
    }
}

class ass15_q4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 =0;

        System.out.println("Enter number of rows:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of Columns:");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1,iValue2);
    }
}
