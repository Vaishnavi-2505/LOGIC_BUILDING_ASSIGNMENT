////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment19-Q4.c
//  Descreption : accept N numbers from users and return  frequency  of 11 from it.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 6
//  Elements :  85  66  3  80  93  88 
//  output : 0

//  input : N : 6
//  Elements :  85  11  3  80  11  88 
//  output : 2
//

////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0;
    int ifreq = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]  == 11)
        {
            ifreq++;

        }
    }
    return ifreq;
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
    iRet = Frequency(p,iSize);

    printf(" %d\n",iRet);

    free(p);

    return 0;
}