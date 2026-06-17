///////////////////////////////////////////////////////
//
//  File name :     assignment5-2.c
//  Descreption :   accept 1 no from user & print that no on screen
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input :  8
//  output:  1   2   3   4   5    6    7    8   
///////////////////////////////////////////////////////


#include<stdio.h>

void Display (int iNo)
{
    int iCnt = 0 ;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt  = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
    