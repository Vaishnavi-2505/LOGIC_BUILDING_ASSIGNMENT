///////////////////////////////////////////////////////
//
//  File name :     assignment11-2.c
//  Descreption :  accept 1 no from user and display its pattern and reverse the number.
//  Author :        Vaishanvi D Shingare
//
// input : 5
// output :5       #      4       #       3       #       2       #       1       #
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}