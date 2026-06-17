////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :    Assignment20-Q1.c
//  Descreption :  accept N numbers from users and accept  1 another number as check whether NO is present or not.
//  Author :       Vaishanvi D Shingare
//  Date :         28/04/2025

//  input : N : 6
//  NO    :     66
//  Elements :  85  66  3  80  93  88 
//  output : Number is Present

//  input : N : 6
//  NO    :     12
//  Elements :  85  11  3  80  11  88 
//  output : Number is Absent
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }   
    }
    return FALSE;
}

int main()
{
    int iSize  = 0, iRet = 0,iCnt = 0, iValue= 0;
    int *p = NULL; BOOL bRet = FALSE;

    printf("Enter numbers of Elements :");
    scanf("%d",&iSize);

    printf("Enter the numbers :");
    scanf("%d",&iValue);

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
    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is Absent");
    }
    free(p);

    return 0;
}