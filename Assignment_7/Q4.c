///////////////////////////////////////////////////////
//
//  File name :     assignment7-4.c
// Descreption : write  program to find odd factorial of given number.. 
//  Author :  Vaishanvi D Shingare
//  Date : 28/04/2025

// input :  5
//output :  15      (5 * 3 * 1)

// input :  -5
//output :  15   (5 * 3 *1)

// // input :  10
//output :  945 (9 * 7 * 5 * 3 * 1)

///////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{

    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =iNo ; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;

        }
    }
    return iFact;
}
int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Even factorial of no is %d ",iRet);
    
    return 0;
}