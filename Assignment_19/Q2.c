////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment19-Q2.c
//  Descreption : accept N numbers from users and return differnece between frequency  of even numbers and odd numbers.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 7
//  Elements :  85  66  3  80  93  90  88 
//  output : 1(4-3)
//

////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]  % 2 == 0)
        {
             iEven++;
        }
        else
        {
             iOdd++;
        }
    }
    return iEven - iOdd;
}

int main()
{
    int iSize  = 0, iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter numbers of Elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize* sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements ",iSize);

    for(iCnt = 0; iCnt <iSize ;iCnt++)
    {
        printf("Enter elements  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p,iSize);

    printf(" %d\n",iRet);

    free(p);

    return 0;
}