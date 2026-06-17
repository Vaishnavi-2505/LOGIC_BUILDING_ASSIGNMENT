/////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : assignment10-4.c
//  Description : write a program which accepts number from user and return the multiplication of all digits.
//  Author      : Vaishnavi Shingare
//  Date        : 25/5/2025
//
//  Input  : 2395
//  Output : 270

//  Input  : 1018
//  Output : 0

//  Input  : 9440
//  Output : 144

//  Input  : 922432
//  Output : 864

/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int MultDigits(int iNo)
{
    int i = 0;    
    int iMult = 1;

    while (iNo != 0)
    {
        i = iNo % 10;
        iMult = iMult * i;
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{
    int iValue  = 0;
    int iRet  = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}