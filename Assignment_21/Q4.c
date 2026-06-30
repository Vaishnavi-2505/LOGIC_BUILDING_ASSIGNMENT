////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment21-Q4.c
//  Descreption :   accept N numbers from users and display  all such numbers which contains 3 digit in it.
//  Author      :   Vaishanvi D Shingare
//  Date        :     28/04/2025

// input : N  :  6
//  Elements : 8225 665 3  76  953  858
//  output : 665 953  858

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
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

    Digits(p,iSize);
        
    free(p);

    return 0;
}