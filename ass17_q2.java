//Accept number of rows and number of columns from user and Display below pattern
/*
input: iRow: 4  iCol: 4
output: 
        *   *   *   #
        *   *   #   @
        *   #   @   @
        #   @   @   @
 */ 
import java.util.*;
class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0,j = 0;
        for(i = 1; i <= iRow; i++)
        {
            for(j= iCol;j >=1; j--)
            {
                if(i==j)
                {
                    System.out.print("#\t");
                }
                else if(i < j)
                {
                    System.out.print("*\t");
                }
                else if(i > j)
                {
                    System.out.print("@\t");
                }
            }
             System.out.println();
        }
    }
}

class ass17_q2
{
    public static void main(String A[])
  {  
    Scanner sobj = new Scanner(System.in);
    int iValue1 = 0,iValue2 = 0;

    System.out.println("Enter number of rows:");
    iValue1=sobj.nextInt();

    System.out.println("Enter number of columns:");
    iValue2=sobj.nextInt();

    Pattern pobj  = new Pattern();

    pobj.Display(iValue1,iValue2);
  }
}