////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment21-Q3.c
//  Descreption :   accept N numbers from users and return the difference between  largest and smallest number.
//  Author      :   Vaishanvi D Shingare
//  Date        :     28/04/2025

// input : N  :  6
//  elements : 85 66 3  66  93  88
//  output : 90(93-3)

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define  FALSE 0

typedef int BOOL;

int Difference (int Arr[],int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    int iMax = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];        
        }   
        if(Arr[iCnt]< iMin)
        {
            iMin = Arr[iCnt];        
        }
    }
    return iMax - iMin;
}

int main()
{
    int iSize  = 0, iRet = 0,iCnt = 0, iValue= 0;
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

    iRet = Difference(p,iSize);
    
    printf("Difference is : %d",iRet);
    
    free(p);

    return 0;
}