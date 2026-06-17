///////////////////////////////////////////////////////
//
//  File name :     assignment4-4.c
//  Descreption :   accept 1 no from user & print that no of odd on screen
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  input : 18
//  output : 1  3  5   7   9   11    13
///////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay (int iNo)
{
    int  i = 0 , iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = 0 ;iCnt <= iNo; iCnt++)
    if((iCnt % 2) !=0)
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

    OddDisplay(iValue);

    return 0;
}
    