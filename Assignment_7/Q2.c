///////////////////////////////////////////////////////
//
//  File name :     assignment7-2.c
// Descreption : accept amount in Us dolar and return its correspomding value in indian currency consider 1$ as 70 rupees..
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

// input :  10
//output :  700

// input :  3
//output :  210

// input :  1200
//output :  84000

///////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)

{
    return iNo*70;
} 
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter number of USD :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}