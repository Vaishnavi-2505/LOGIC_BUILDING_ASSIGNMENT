////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name :     Assignment8-5.c
// Description :  Write the program which accepts number from users and display Fahrenheit to Celsius (°F to °C).
//  Author :        Vaishanvi D Shingare 
//  Date :          3/07/2025

//input : 10
//output : -12.2222  (10 - 32) * (5/9)

//input : 34
//output : 1.11111   (34 - 32) * (5/9)

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float ftemp)
{
    double dCel = 0.0;

    dCel = (ftemp - 32) * 5.0 / 9.0 ;

    return dCel;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius: %f\n", dRet);

    return 0;
}