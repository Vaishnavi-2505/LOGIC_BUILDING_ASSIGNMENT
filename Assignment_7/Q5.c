///////////////////////////////////////////////////////
//
//  File name :     assignment7-5.c
// Descreption : write  program which return difference between even factorial and odd factorial of given number..
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

// input :  5
//output :  -7   (8 - 15)

// input :  -5
//output :  -7   (8 - 15)

// // input :  10
//output :  2895 (3840 - 945)

///////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)

{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =iNo ; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0) 
        {
            iEven = iEven * iCnt;

        }
        else
        {
            if(iCnt % 2 != 0) 
            {
                iOdd = iOdd * iCnt;
             }
        }
    }
    return iEven - iOdd;

} 
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial diference is %d",iRet);

    return 0;
}
