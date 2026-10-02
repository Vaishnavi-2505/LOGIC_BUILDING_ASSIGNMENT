////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment25-5.c
//  Descreption :   Write a program which accept string from user and count number of capital characters.
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//

//  "Input : “MarvellouS”

//  Output : 0

//  Input : “MarvellouS Infosystems”

//  Output : 1

//  Input : “MarvellouS Infosystems Student Vaishnavi Shivansh”

//  Output : 5

////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;


    while(*str != '\0')
    {

        if(*str ==' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;


}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

     iRet = CountWhite(Arr);
    
    printf("%d",iRet);

    return 0;
}