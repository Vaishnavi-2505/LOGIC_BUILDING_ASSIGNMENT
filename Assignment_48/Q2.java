///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment 48-Q2.java
//  Description : write java program which accept string from user and display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          2/6/2025

/* INPUT  : Hello
   OUTPUT : H e l l o
            H e l l 
            H e l 
            H e 
            H 
*/
           
///////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Q2
{
    public void Pattern(String str) 
    {
        int ino = str.length();

        for (int i = 0; i < ino; i++) 
        {
            
            for (int j = 0; j < (ino - i) ; j++) 
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

        Q2 obj = new Q2();
        obj.Pattern(input);
    }
}