////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment19-Q1.c
//  Descreption : accept N numbers from users and return frequency  of even numbers.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 6
//  Elements :  85  66  3  80  93  88 
//  output : 3
//

////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0;
    int iEven = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }

    }
    return iEven;

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
    iRet = CountEven(p,iSize);

    printf("Frequency of Even numbers is : %d\n",iRet);

    free(p);

    return 0;
}