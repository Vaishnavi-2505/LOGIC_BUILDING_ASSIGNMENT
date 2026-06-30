////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment21-Q5.c
//  Descreption :   accept N numbers from users and display summation of digits of each numbers.
//  Author      :   Vaishanvi D Shingare
//  Date        :     28/04/2025

// input : N  :  6
//  Elements : 8225 665 3  76  953  858
//  output : 17 17 3 13 17 21

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DigitSum(int Arr[] , int iLength)
{
    int iCnt = 0;
    int iNo = 0;
    int iSum = 0;
    int iDigit = 0;

    for(iCnt = 0;iCnt < iLength ; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0; // Reset sum for the current number

        // Handle negative numbers if any are entered
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while (iNo > 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d ",iSum);
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

    DigitSum(p,iSize);
        
    free(p);

    return 0;
}

