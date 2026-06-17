
///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment15-Q2.c
//  Descreption :   accept no of rows and column from user and display below pattern
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

// input : iRow = 4     iCol = 4

/*  output : *  *  *  *
             *  *  *  #
             *  *  #  #
             *  #  #  #
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1;i <= iRow;i++)
    {
        for(j =iCol ;j >= 1;j--)
        {
            if((i > j) == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        } 
        
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter numbers of rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}