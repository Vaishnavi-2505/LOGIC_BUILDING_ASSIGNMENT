////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment18-Q2.c
//  Descreption : accept N numbers from users and display all such elements which is divisible by 5.  
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

// input  N : 6

// Elements : 85 66 3 80 93 88

// output : 85 80
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include<stdio.h>

void display(int Arr[] , int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)

    if(Arr[iCnt] % 5 == 0)
    {
        printf("%d", Arr[iCnt]);  
    }

}

int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0;
    int *p = NULL;

    printf("Enter numbers of Elements :");
    scanf("%d",&iSize);

    p = ( int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memeory");
        return -1;

    }
    printf("Enter %d elements ", iSize);

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        printf("Enter Elements %d :", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    display(p, iSize);

    free(p);

    return 0;
}


