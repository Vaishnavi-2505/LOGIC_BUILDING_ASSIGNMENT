///////////////////////////////////////////////////////
//
//  File name :     assignment11-1.c
//  Descreption :  accept 1 no from user and display its alphabet.
//  Author :        Vaishanvi D Shingare
//
// input : 5
// output : A  B  C   D  E
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)

{
    int icnt = 0;
    char ch = 'A';

    for(icnt= 1;icnt<= iNo;icnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
