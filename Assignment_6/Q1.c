//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment6-1.c
//  Descreption :   accept 1 no from user & print that  less than 50 = small, greater than 50 but less than 100 =medium, greater that 100 = large on screen
//  Author :        Vaishanvi D Shingare

//input : 75
//output : medium
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number( int iNo)
{

    if(iNo <= 50)
    {
        printf("small \n");
    }
    else if ((iNo >= 50) && (iNo <= 100))
    {
        printf("medium \n");
    }
    else
    {
        printf("large \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}