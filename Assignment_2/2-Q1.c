///////////////////////////////////////////////////////
//
//  File name :     assignment2-1.c
//  Descreption :   accept 1 no from user & print that no of * on screen
//  Author :        Vaishanvi D Shingare
//  Date :          11/5/2025
//
///////////////////////////////////////////////////////



void Display(int iNo)
{
    int iCnt = 0;
    //write updater
    while(iCnt < iNo   )
    {
        printf("*");
        iCnt++;
        
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf(" %d",&iValue  );

    Display(iValue);
    
    return 0 ;
}