//////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name :     assignment9-5.c
//  Description :  Write the program which accepts number from user and count frequency of 6 in it.
//  Author :        Vaishanvi D Shingare
//  Date :          2/07/2025

//input : 2395
//output :3

//input : 1018
//output :3

//input : 9440
//output :3

//input : 96672
//output :1

#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 6)
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

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}