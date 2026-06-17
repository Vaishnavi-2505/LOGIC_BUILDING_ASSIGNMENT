///////////////////////////////////////////////////////
//
//  File name :     assignment2-2.c
//  //  Descreption :   accept 1 no from user & print that no of * on screen
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////


void Display(int iNo)
{
    //write updater
    while(iNo > 0 )
    {
        printf("*");
        iNo --;

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("  %d",&iValue  );

    Display(iValue);

    return 0 ;
}