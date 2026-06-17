 ///////////////////////////////////////////////////////
//
//  File name :     assignment2-3.c
//  Descreption :   accept no from user if no less than 10 then print("hello")or("demo")
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////


 void Display(    int    iNo)
{
    if(  iNo <  10    )
    {
        printf("Hello");

    }
    else
    {
        printf("Demo");
    
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("   %d",&iValue     );

    Display(iValue);

    return 0;
}