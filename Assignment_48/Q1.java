///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment 48-Q1.java
//  Description : write java program which accept string from user 
//                  and display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          2/6/2025

/* INPUT  : Hello
   OUTPUT : H e l l o
            H e l l o
            H e l l o
            H e l l o
*/
           
///////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Q1 
{
    public void Pattern(String str) 
    {
        int ino = str.length();

        for (int i = 0; i < ino; i++) 
        {
            for (int j = 0; j < ino; j++) 
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = sobj.nextLine();

        Q1 obj = new Q1();
        obj.Pattern(input);
    }
}