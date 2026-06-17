//////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name   :     assignment9-3.c
//  Description :  Write the program which accepts number from user and count frequency of 2 in it.
//  Author      :        Vaishanvi D Shingare
//  Date :          21/07/2025

//input : 2395
//output :1

//input : 1018
//output :0

//input : 9000
//output :0

//input : 922432
//output :3

#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0;
    int iDigit =0;

    if( iNo < 0)
    {
        iNo = -iNo;

    }
    while( iNo != 0)
    {
        iDigit = iNo % 10;
        if( iDigit == 2)
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

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}