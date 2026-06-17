///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment20-Q5.c
//  Descreption : accept N numbers from user and return product of all odd elements.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 6
//  Elements :  15 66 3 70 10 88
//  output : 45 

//  input : N : 6
//  Elements :  44  66  72  70  10  88 
//  output : 0

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iOdd = 0;
    int iMult = 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            if(iMult == 0)
            {
                iMult = Arr[iCnt];
            }
            else
            {
                iMult = iMult * Arr[iCnt];
            }
        }
    }
    return iMult;
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

    iRet = Product(p,iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}