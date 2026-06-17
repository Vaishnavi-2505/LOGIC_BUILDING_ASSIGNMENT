///////////////////////////////////////////////////////
//
//  File name :     assignment5-5.c
//  Descreption :   accept 1 no from user & print that no of multiple on screen
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
/*

   input : 4
  output: 4    8    16    20
 */
 ///////////////////////////////////////////////////////


 #include<stdio.h>

void MultipleDisplay (int iNo)
{
    int  i = 0 , iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
    