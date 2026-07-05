///////////////////////////////////////////////////////
//
//  File name :     assignment41-1.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   *  *  *  *  *
///////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 0;

    while(i < iNo)
    {
        printf("*\t",iNo);
        i++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}