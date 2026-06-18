///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Q5.java
//  Description : write java program which accept string from user and display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          2/6/2025
/*
// INPUT  : Hello
//  OUTPUT :
            H  *  *  *  *
            H  e  *  *  *
            H  e  l  *  *
            H  e  l  l  *
            H  e  l  l  o
            H  e  l  l  *
            H  e  l  *  *
            H  e  l  *  *
            H  e  *  *  *
            H  *  *  *  *
*/         
///////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Q5
{
    public void Pattern(String str) 
    {
        int ino = str.length();
        int i = 0;
        int j = 0;

        for ( i = 0 ; i < ino ; i++) 
        {
            for ( j = 0; j < ino ; j++) 
            {
                if(i <= j)
                {
                     System.out.print("* ");

                }
                else
                {
                     System.out.print(str.charAt(j) + " ");

                }
            }
            System.out.println();
        }
        for ( i = 0 ; i < ino; i++) 
        {
            for ( j = 0; j < ino; j++) 
            {
                if(j < (ino - i))
                {
                    System.out.print(str.charAt(j) + " ");
                }
                else
                {
                    System.out.print("* ");

                }
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.print("Enter a string: ");
        String input = sobj.nextLine();

        Q5 obj = new Q5();
        obj.Pattern(input);
    }
}