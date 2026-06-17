///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment20-Q3.c
//  Descreption : accept N numbers from users and accept Range,Display all elements from that range .
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 6
//  NO        :     60
//  End       :     90
//  Elements  :  85  66  3  76  93  88 
//  output    : 66 76 88

//  input : N : 6
//  NO        :     30
//  End       :     50
//  Elements  :  85  66  3  76  93  88 
//  output    : 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Range(int Arr[],int iLength,int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize  = 0, iRet = 0,iCnt = 0, iValue1= 0,iValue2= 0;
    int *p = NULL; 

    printf("Enter numbers of Elements :");
    scanf("%d",&iSize);

    printf("Enter the Starting point :");
    scanf("%d",&iValue1);

    printf("Enter the Ending point :");
    scanf("%d",&iValue2);

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

    iRet = Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}