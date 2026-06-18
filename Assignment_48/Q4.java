///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment 48-Q4.java
//  Description : write java program which accept string from user and display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          2/6/2025

/* INPUT  : Hello
   OUTPUT : H e l l o
            H e l l 
            H e l 
            H e 
            H 
            H e 
            H e l 
            H e l l
            H e l l o
*/
           
///////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Q4
{
    public void Pattern(String str) 
    {
        int ino = str.length();

        for (int i = ino; i >= 1; i--) 
        {
            for (int j = 0; j < i ; j++) 
            {
                System.out.print(str.charAt(j) + " ");
            }
            System.out.println();
        }
        for (int i = 2; i <= ino; i++) 
        {
            for (int j = 0; j <= (i - 1) ; j++) 
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

        Q4 obj = new Q4();
        obj.Pattern(input);

    }
}
