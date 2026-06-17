///////////////////////////////////////////////////////
//
//  File name :     assignment16-Q5.c
//  Descreption :   accept no of rows and column from user and display below pattern
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

// input : iRow = 4     iCol = 4

/*  output : 1  2  3  4
                2  3  4
                   3  4
                      4
*/
//
///////////////////////////////////////////////////////


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1;i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i > j)
            {
                printf(" \t",j);
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }




}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter numbers of rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}