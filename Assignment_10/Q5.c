/////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : assignment10-5.c
//  Description : write a program which accepts number from user and return difference between summation of even digits & summation of odd digits.  the multiplication of all digits.
//  Author      : Vaishnavi Shingare
//  Date        : 9/5/2025
//
//  Input  : 2395
//  Output : -15 (2 - 17)

//  Input  : 1018
//  Output : 6 (8 -2)

//  Input  : 8440
//  Output : 16 (16 -0)

//  Input  : 5733
//  Output : -18(0 -18)

/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountDiff(int iNo)
{
    int ieven = 0;    
    int iodd = 0;
    int iSum = 0;

    while (iNo != 0)
    {
        iSum = iNo % 10;

        if (iSum % 2 == 0)
        {
            ieven += iSum;
        }
        else
        {
            iodd += iSum;
        }

        iNo = iNo / 10;
    }

    return ieven - iodd;
}

int main()
{
    int iValue  = 0;
    int iRet  = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}