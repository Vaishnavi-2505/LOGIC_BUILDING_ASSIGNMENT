////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name :     Assignment8-Q3.c
// Description :  Write the program which accepts number from users and display kilometer into meter.
//  Author :        Vaishanvi D Shingare 
//  Date :          3/07/2025

//input : 5
//output :5000

//input : 12
//output :12000

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo*1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters: %d\n", iRet);

    return 0;
}