///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment46-Q3.java
//  Descreption :   write java program which accepts nos of rows and colunm from user and display below patterns.
//  Author :        Vaishanvi D Shingare
//  Date :          28/01/2025


// Input 3  5   
/*
     A       A       A       A       A
     B       B       B       B       B
     C       C       C       C       C
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = 'A';

        for(i = 1; i <= iRow; i++,ch++)
        {
            for(j = 1; j <= iCol; j++)
            {
                System.out.print(ch+"\t");
            }
            System.out.print("\n");
        }
    }
}

class Q3
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