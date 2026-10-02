////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment25-2.c
//  Descreption :   Write a program which accept string from user and count number of capital characters.
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//

// input : "Marvellous Multi OS"
// output : MARVELLOUS MULTI OS

////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void struprx(char *str)
{

    while(*str != '\0')
    {
        if((*str >='a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    struprx(Arr);
    
    printf("Modified string is : %s",Arr);

    return 0;
}