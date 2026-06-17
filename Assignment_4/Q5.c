///////////////////////////////////////////////////////
//
//  File name :     assignment4-5.c
//  Descreption :   accept  no from user & display its difference of factors
//  Author :        Vaishanvi D Shingare

// input : 12
// output :-34 (16  - 50)

// input : 10
// output :-29 (8 - 37)


//
///////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{
    if(iNo < 0)     // Updator
    {  
        iNo = -iNo;
    }
    int i = 0,iMult = 0,iFact = 0;

    for(i = 1 ; i<iNo; i++)
    {
        if((iNo % i) == 0)
        {
            iMult = iMult + i;
        }
        else
        {
            iFact = iFact + i;
        }
    }    
    return iMult - iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
