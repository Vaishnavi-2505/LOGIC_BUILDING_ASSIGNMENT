///////////////////////////////////////////////////////
//
//  File name :     assignment11-5.c
//  Descreption :  accept 1 no from user and print multiple of it
//  Author :        Vaishanvi D Shingare
//
// input : 8
// output : 2  4   8   10   12   14   16
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo; i++)
    {
        if( iNo == 2)
        {
            printf("%d",iCnt);
        }
    }
    iCnt++;
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}