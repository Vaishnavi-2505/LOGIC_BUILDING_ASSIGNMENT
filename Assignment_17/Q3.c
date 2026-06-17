///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment17-Q3.c
//  Descreption :   accept no of rows and column from user and display below pattern
//  Author :        Vaishanvi D Shingare
//  Date :          2/10/2025

// input : iRow = 5     iCol = 5

/*  output : *   *   *   *   *   * 
             *               *   *
             *           *       *
             *       *           *
             *   *               *
             *   *   *   *   *   *   

*/   
///////////////////////////////////////////////////////////////////////////////////////////////


 #include<stdio.h>

void Pattern(int iRow , int iCol)
{
        
    int i = 0;
    int j = 0;

    for(i = 1;i <= iRow; i++)
    {
        for(j = iCol ; j >= 1; j-- )
        {
            if((i == 1) || ( i == iRow) ||(i == j) ||  (j == 1) || (j == iCol))
            {
                printf("*\t");
            }
            else if ( i < j)
            {
                printf(" \t");
            }
            else
            {
                printf("\t");
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