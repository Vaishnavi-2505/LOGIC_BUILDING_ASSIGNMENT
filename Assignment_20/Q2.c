///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment20-Q2.c
//  Descreption : accept N numbers from users and accept 1 another number as check whether NO , return index of first of occurence of that NO.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 6
//  NO    :     66
//  Elements :  85  66  3  80  93  88 
//  output : 1

//  input : N : 6
//  NO    :     12
//  Elements :  85  11  3  80  11  88 
//  output : -1
//

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        
        if(Arr[iCnt] == iNo)
        {
            return 1;
        }   
    }
    return -1;
}

int main()
{
    int iSize  = 0, iRet = 0,iCnt = 0, iValue= 0;
    int *p = NULL; 

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

    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");

    }
    else
    {
        printf("First occurence of number is :%d",iRet);
    }
    free(p);

    return 0;
}