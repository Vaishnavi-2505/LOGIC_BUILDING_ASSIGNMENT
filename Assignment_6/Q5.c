
///////////////////////////////////////////////////////
//
//  File name :     assignment6-2.c
// Descreption : write  program which accept number from user and display its table in reverse
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//input : 2
// output : 20  18  16  14  12  10  8  6   4   2 
//input : 5
//output : 50  45  40  35  30  25  20  15  10  5

//input : -5
//output : 50  45  40  35  30  25  20  15  10  5

///////////////////////////////////////////////////////



#include<stdio.h>

void TableRev(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    

    for(int i = 10 ; i >= 1  ; i--)
    {
        printf("%d \t",i * iNo);
    }
   
}

int main()
{
    int iValue = 0; 

    printf("Enter number :");
    scanf("%d",&iValue);

    TableRev(iValue);
    
    return 0;
}