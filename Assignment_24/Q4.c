///////////////////////////////////////////////////////
//
//  File name :     assignment24-4.c
//  Descreption :   Write a program which accept string from user and check whether it contains vovels in it or not .
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//

//  input  : "marvellous"
//  output : TRUE

//  input  : "Demo"
//  output : TRUE

//  input  : "xyz"
//  output : FALSE

///////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define  FALSE 0

typedef int BOOL;

BOOL ChkVovel(char *str)
{
    
    while (*str != '\0')
    {
        if ((*str =='A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ) ||
           (*str =='a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ))
            {
                return TRUE;
    
            }
            str++;
    }
    
    return FALSE  ;
    
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    bRet = ChkVovel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");

    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}