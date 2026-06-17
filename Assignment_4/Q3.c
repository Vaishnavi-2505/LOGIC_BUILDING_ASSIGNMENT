
///////////////////////////////////////////////////////
//
//  File name :     assignment4-3.c
//  Descreption :   accept  no from user & display its multiplication of non factors
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//input : 12
//output: 5  7  8  9  10  11

//input : 13
//output: 2  3  4  5  6  7  8  9  10  11  12

//input : 10
//output: 3  4  6   7   8   9

//
///////////////////////////////////////////////////////

#include<stdio.h>

#include<stdio.h>

void NonFact(int iNo)
{
    if(iNo < 0)     // Updator
    {  
        iNo = -iNo;
    }
    
    int iMult = 0;

    for(iMult = 1; iMult < iNo; iMult++)
    {
        if((iNo % iMult) != 0)
        {
            printf("%d \t",iMult);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
