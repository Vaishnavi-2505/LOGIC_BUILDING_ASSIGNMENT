////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment25-3.c
//  Descreption :   Write a program which accept string from user and count number of capital characters.
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//

// input : "Marvellous Multi OS"
// output : mARVELLOUS mULTI os

////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void strtogglex(char *str)
{
     while(*str != '\0')
    {

        if((*str >='a') && (*str <= 'a'))
        {
            *str = *str - 32;
        }
        else if((*str >='A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strtogglex(Arr);
    
    printf(" modified string is : %s",Arr);

    return 0;
}