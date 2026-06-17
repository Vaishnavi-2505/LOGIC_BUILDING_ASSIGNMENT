///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment20-Q3.c
//  Descreption : accept N numbers from users and accept  1 another number as check whether NO , return index  of last occurence of that NO.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 6
//  NO    :     66
//  Elements :  85  66  3  66  93  88 
//  output : 3

//  input : N : 6
//  NO    :     93
//  Elements :  85  11  3  80  11  88 
//  output : 4

//  input : N : 6
//  NO    :     12
//  Elements :  85  11  3  80  11  88 
//  output : -1
//

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int lastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = iLength; iCnt >= 0 ; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
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

    iRet = lastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");

    }
    else
    {
        printf("Last occurence of number is %d",iRet);
    }
    free(p);

    return 0;
}