/////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : assignment10-1.c
//  Description : write a program which accepts number from user and return the count of even digit. 
//  Author      : Vaishnavi Shingare
//  Date        : 25/5/2025
//
//  Input  : 2395
//  Output : 1

//  Input  : 1018
//  Output : 2

//  Input  : -1018
//  Output : 2

//  Input  : 8462
//  Output : 4

/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CountEven(int iNo)

{
    int i = 0;    
    int iCnt = 0;

    while (iNo != 0)
    {
        i = iNo % 10;
        if (i % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("%d",iRet);

    return 0;
}