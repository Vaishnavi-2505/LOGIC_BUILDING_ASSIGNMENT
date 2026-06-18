///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment46-Q4.java
//  Descreption :   write java program which accepts nos of rows and colunm from user and display below patterns.
//  Author :        Vaishanvi D Shingare
//  Date :          28/01/2025


// Input 4  5  
/* 
    4  4  4  4  4  
    3  3  3  3  3
    2  2  2  2  2
    1  1  1  1  1
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = iRow; i >= 1; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.print("\n");
        }
    }
}
class Q4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;
        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}