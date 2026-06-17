////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name :     Assignment8-Q2.c
//  Description :  Write the program which accepts number from users and display area of rectangle.
//  Author :        Vaishanvi D Shingare 
//  Date :          3/07/2025

//input : 5.3    9.78
//output : 51.834

////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

double RectArea(float fWidht, float fHeight)
{
    return fWidht * fHeight;
}

int main()
{
    float fValue1 = 0.0 , fValue2= 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of the rectangle: %f\n", dRet);
    return 0;
}