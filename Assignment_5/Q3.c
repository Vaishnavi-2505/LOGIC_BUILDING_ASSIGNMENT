///////////////////////////////////////////////////////
//
//  File name :     assignment5-3.c
//  Descreption :   accept 1 no from user & print that no on screen
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//   input:  4
//   output :-4  -3  -2  -1  0   1  2   3   4
///////////////////////////////////////////////////////



#include<stdio.h>

void Display (int iNo)
{
    int  iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for ( iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
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
    