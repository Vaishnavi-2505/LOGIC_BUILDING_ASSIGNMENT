////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name :     Assignment8-Q1.c
//  Description :  Write the program which accepts number from users and display area of circle.
//  Author :        Vaishanvi D Shingare 
//  Date :          3/07/2025

//input : 5.3
//output : 88.2026

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define PI 3.14159

double CircleArea(float fRadius)
{
    return PI*fRadius*fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the radius of circle:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle:%f\n",dRet);

    return 0;
}