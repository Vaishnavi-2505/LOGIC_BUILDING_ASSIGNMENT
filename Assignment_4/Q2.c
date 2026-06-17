///////////////////////////////////////////////////////
//
//  File name :     assignment4-2.c
//  Descreption :   accept  no from user & display its multiplication of factors
//  Author :        Vaishanvi D Shingare

//input : 12
//output:  6  4  3  2  1

//input : 13
//output: 1  

//input : 10
//output: 5  2  1

//
///////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    if(iNo < 0)     // Updator
    {  
        iNo = -iNo;
    }
    
    int iFact = 0;

    for(iFact = iNo; iFact >= 1; iFact--)
    {
        if((iNo % iFact) == 0)
        {
            printf("%d \t",iFact);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    FactRev(iValue);


    return 0;
}
