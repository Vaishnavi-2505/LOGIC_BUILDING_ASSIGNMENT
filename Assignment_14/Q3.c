////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment14-Q3.c
//  Descreption :   accept numbers of rows and number of columns from users and display belows pattern.
//  Author      :   Vaishanvi D Shingare
//  Date        :     28/04/2025

// input  : iRow = 5  iCol = 5

/*
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        int  iNo = 1;
        char ch ='a';

        for(j = 1; j <= iCol; j++)
        {
            if( i % 2 != 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",iNo);
                iNo++;

            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}