/////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : assignment10-2.c
//  Description : write a program which accepts number from user and return the count of odd digit. 
//  Author      : Vaishnavi Shingare
//  Date        : 2/7/2025
//
//  Input  : 2395
//  Output : 3

//  Input  : 1018
//  Output : 2

//  Input  : -1018
//  Output : 2

//  Input  : 8462
//  Output : 0

/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountOdd(int iNo)
{
    int i = 0;    
    int iCnt = 0;

    while (iNo != 0)
    {
        i = iNo % 10;
        if (i % 2 != 0)
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

    iRet = CountOdd(iValue);
    printf("%d",iRet);

    return 0;
}