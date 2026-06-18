///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Q1.java
//  Description : write java program which accept string from user 
//                  and display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          2/6/2025

/* INPUT  : Hello
   OUTPUT : H e l l o
            H e l l *
            H e l * * 
            H e * * * 
            H * * * * 
*/
           
///////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class Q2
{
        public void Pattern(String str) 
    {
        int ino = str.length();
        int i = 0 ,j = 0;

        for ( i = 0 ; i < ino ; i++) 
        {
            for ( j = 0; j < ino ; j++) 
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

        Q2 obj = new Q2();
        obj.Pattern(input);
    }
}