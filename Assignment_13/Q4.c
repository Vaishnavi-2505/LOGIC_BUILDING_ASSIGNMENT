////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment13-Q4.c
//  Descreption :   accept numbers of rows and number of columns from users and display belows pattern.
//  Author      :   Vaishanvi D Shingare
//  Date        :     28/04/2025

// input  : iRow = 4  iCol = 4

/*  output :  4 4 4 4
              3 3 3 3
              2 2 2 2 
              1 1 1 1
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern( int iRow, int iCol)

{
    int i =1;
    int j =1;
    
    for(i = iRow; i >= 1;i--)
    {
        for(j = 1; j <= iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2= 0;

    printf("Enter number of rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}