//////////////////////////////////////////////////////////////////////////////////////////////////////

//  File name :     assignment9-1.c
// Description :  Write the program which accepts number from users and display its digits in reverse order.
//  Author :        Vaishanvi D Shingare 
//  Date :          3/07/2025

/*input : 2395
output :   5
           9
           3
           2

input : 1018
output : 8
         1
         0
         1
           
  input  : 9000
 output  : 0
           0
           0
           9

 */         
////////////////////////////////////////////////////////////////////////////////////////////////////// 
#include<stdio.h>

void DispalyDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit =iNo % 10;
        iNo = iNo / 10;

        printf("%d\n", iDigit);
    }
}
int main()
{
    int iValue  = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DispalyDigit(iValue);

    return 0;
}