///////////////////////////////////////////////////////
//
//  File name :     assignment16-Q3.c
//  Descreption :   accept no of rows and column from user and display below pattern
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

// input : iRow = 5     iCol = 5
/*  output -  $       *       *       *       *
              #       $       *       *       *
              #       #       $       *       *
              #       #       #       $       *
              #       #       #       #       $
*/             
//
///////////////////////////////////////////////////////



 #include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i >=j ) && (i <= j) == 0)
            {
                printf("#\t");
            }
            else if(i == j)
            {
                printf("$\t");

            }
            else
            {
                printf("*\t");
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