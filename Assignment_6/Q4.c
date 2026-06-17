
///////////////////////////////////////////////////////
//
//  File name :     assignment6-2.c
// Descreption : writw program which accept number from user and display its table
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//input : 2
//output :2  4  6  8  10  12  14   16  18   20

//input : 5
//output : 5 10 15 20 25 30 35 40 45 50

//input : -5
//output : 5 10 15 20 25 30 35 40 45 50

///////////////////////////////////////////////////////



#include<stdio.h>

void Table( int iNo)
{ 

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <=10 ; i++)
    {
        printf("%d \t",i * iNo);
    }
    
}

int main()
{
    int iValue = 0; 

    printf("Enter number :");
    scanf("%d",&iValue);

    Table(iValue);
    
    return 0;
}