///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  File name :     assignment47-4.c
//  Descreption :   write java program which accept number of rows and number of columns from user and display. 
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//
// Input 3  4   
/*
    *    #   *  #
    *    #   *  #
    *    #   *  #
    *    #   *  #
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j % 2 == 0)
                {
                    System.out.print("#\t");
                }
                else
                {
                    System.out.print("*\t");
                }
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