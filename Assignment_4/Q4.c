
///////////////////////////////////////////////////////
//
//  File name :     assignment4-4.c
//  Descreption :   accept  no from user & display its summation of factors
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025

// input : 12
// output :50

// input : 10
// output :37

//
///////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    if(iNo < 0)     // Updator
    {  
        iNo = -iNo;
    }
    
    int iMult = 0, iSum = 0;

    for(iMult = 1; iMult < iNo; iMult++)
    {
        if((iNo % iMult) != 0)
        {
            iSum = iSum + iMult;            
        }
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}
