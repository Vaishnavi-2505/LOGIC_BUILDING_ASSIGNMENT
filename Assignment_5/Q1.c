///////////////////////////////////////////////////////
//
//  File name :     assignment5-1.c
//  Descreption :   accept 1 no from user & print that no of patterns on screen
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
/*
    input : 5
    output: $  *  $   *  $  *  $  *  $

    input : 3
    output: $  *  $   *  $  *

    input : -3
    output: $  *  $   *  $  *  
*/
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("$\t *\t");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
