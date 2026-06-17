////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Assignment19-Q5.c
//  Descreption : accept N numbers from users and return 1 another number  as NO,return  of frequency  of NO form it.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

//  input : N : 6
//  NO     : 66
//  Elements :  85  66  3  80  66  88 
//  output : 2

//  input : N : 6
//  NO     : 12
//  Elements :  85  11  3  80  11  88 
//  output : 0
//

////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int ifreq = 0;

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            ifreq++;

        }
    }
    return ifreq;
}

int main()
{
    int iSize  = 0, iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;

    printf("Enter numbers of Elements :");
    scanf("%d",&iSize);

    printf("Enter the numbers  :");
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
    iRet = Frequency(p,iSize,iValue);

    printf(" %d\n",iRet);

    free(p);

    return 0;
}