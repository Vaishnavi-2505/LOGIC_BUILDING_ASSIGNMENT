////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name :     Assignment8-Q4.c
// Description :  Write the program which accepts number from users and display area of circle.
//  Author     :        Vaishanvi D Shingare 
//  Date       :          3/07/2025

//input : 5.3
//output : 88.2026

////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

double CircleArea(float fRadius)
{
    return 3.14159 * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Enter the area of circle %.4f\n", dRet);   // prints upto 4 decimal places

    return 0;
}
