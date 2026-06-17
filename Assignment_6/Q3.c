
///////////////////////////////////////////////////////
//
//  File name :     assignment6-3c
// Decription  : write program to find og factorial of given number
//  Author :        Vaishanvi D Shingare

//input : 5
//output :120  (5 * 4 * 3 * 2 * 1)

//input : -5
//output :120  (5 * 4 * 3 * 2 * 1)


//input : 4
//output :24 (4 * 3 * 2 * 1)

///////////////////////////////////////////////////////


#include<stdio.h>


int Factorial( int iNo)
{
    if(iNo < 0)
    {  
        iNo = -iNo;
    }

    int i =  0, iFact = 1;

    for(i = 1; i <= iNo;i++)
    {
        iFact  = iFact * i;
    }
    return iFact;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}