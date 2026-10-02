////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment25-1.c
//  Descreption :   Write a program which accept string from user and count number of capital characters.
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//

// input : "Marvellous Multi OS"
// output : marvellous multi os

////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void strlwrx(char *str)
{

    while(*str != '\0')
    {

        if((*str >='A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);
    
    printf("Modified string is : %s",Arr);

    return 0;
}