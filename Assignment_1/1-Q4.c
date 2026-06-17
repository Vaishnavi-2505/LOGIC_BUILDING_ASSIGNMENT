///////////////////////////////////////////////////////
//
//  File name :     program1-4.c
//  Descreption :   accept 1 no & check whether is divisible by 5 or not
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

 BOOL Check( int  iNo)
{
    if (( iNo %5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE ;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf(" %d",& iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Division by 5");
    }
    else
    {
        printf("Not Division by 5");
    }

    return 0;
}