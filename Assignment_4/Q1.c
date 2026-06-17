///////////////////////////////////////////////////////
//
//  File name :     assignment4-1.c
//  Descreption :   accept  no from user & display its multiplication of factors
//  Author :        Vaishanvi D Shingare

//input : 12
//output: 144   ( 1 * 2 * 3 * 4 * 6)

//input : 13
//output: 1    ( 1)

//input : 10
//output: 10   ( 1 * 2 * 5)

//
///////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    if(iNo < 0)     // Updator
    {  
        iNo = -iNo;
    }
    
    int iMult = 0;

    for(iMult = 1; iMult < iNo; iMult++)
    {
        if((iNo % iMult) == 0)
        {
            printf("%d \t",iMult);
        }
    }
    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}
