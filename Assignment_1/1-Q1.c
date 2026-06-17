///////////////////////////////////////////////////////
//
//  File name :     assignment1-1.c
//  Descreption :   Divide 2 no. 
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;
    if (iNo2 == 0 ) 
    {
        return -1;
    }
    iAns = iNo1 / iNo2;

    return iAns;
}
int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1 , iValue2);

    printf("division is %d",iRet);

    return 0;
}