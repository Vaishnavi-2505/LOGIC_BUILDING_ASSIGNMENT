//////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name :     assignment9-4.c
//  Description :  Write the program which accepts number from user and count frequency of 4 in it.
//  Author :        Vaishanvi D Shingare
//  Date :          8/07/2025

//input : 2395
//output :0

//input : 1018
//output :0

//input : 9440
//output :2

//input : 922432
//output :1

#include<stdio.h>

int CountFour(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo == 0)
    {
        iNo = - iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}