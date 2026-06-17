///////////////////////////////////////////////////////
//
//  File name :     assignment3-1.c
//  Descreption :   accept 1 no from user & print that no of even on screen
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  Input   : 7             
//  Output  : 2  4  6  8  12  14
//
///////////////////////////////////////////////////////


void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}