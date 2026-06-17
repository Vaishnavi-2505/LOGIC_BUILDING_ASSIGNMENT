/////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : assignment10-3.c
//  Description : write a program which accepts number from user and return the digits between 3 and 7 .
//  Author      : Vaishnavi Shingare
//  Date        : 4/5/2025
//
//  Input  : 2395
//  Output : 1

//  Input  : 1018
//  Output : 0

//  Input  : 4521
//  Output : 2

//  Input  : 9922
//  Output : 0

/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountRange(int iNo)
{
    int i = 0;    
    int iCnt = 0;

    while (iNo != 0)
    {
        i = iNo % 10;
        if (i > 3 && i < 7)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue  = 0;
    int iRet  = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);

    return 0;
}