
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment21-Q1.c
//  Descreption : accept N numbers from users and return the largest number.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 6
//  Elements :  85  66  3  66  93  88 
//  output : 93

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

#define TRUE 1
#define  FALSE 0

typedef int BOOL;

int Maximum(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];        
        }   
    }
    return iMax;
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

    iRet = Maximum(p,iSize);
    
    printf("Largest number is : %d",iRet);
    
    free(p);

    return 0;
}