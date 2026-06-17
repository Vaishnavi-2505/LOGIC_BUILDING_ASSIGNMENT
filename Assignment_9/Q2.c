//////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name   :  assignment9-2.c
//  Description :  Write the program which accepts number from user and display and check whether it contains 0 or not.
//  Author      :  Vaishanvi D Shingare
//  Date        :  18/07/2025

//input : 2395
//output :there is no zero

//input : 1018
//output :it contains zero

//input : 9000
//output :it contains zero

//input : 10687
//output :it contains zero

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    if( iNo == 0)
    {
        return TRUE;
    }
    while(iNo != 0)
    {
        if(iNo % 10 == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10 ;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}