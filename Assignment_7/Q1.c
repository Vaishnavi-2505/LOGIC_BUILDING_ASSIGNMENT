
///////////////////////////////////////////////////////
//
//  File name :     assignment7-1.c
// Descreption : write  program which accept number from user and display its pattern 
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

// input :  5
//output :  *   *   *    *    *   #    #    #    #    #

// input :  6
//output :  *   *   *    *    *  *   #    #    #    #    #    #

// input :  -5
//output :  *   *   *    *    *   #    #    #    #    #

// input :  2
//output :   *    *   #    #    

///////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)

{
    int  iCnt =0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("#\t");
    }
     printf("\n");


} 
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}