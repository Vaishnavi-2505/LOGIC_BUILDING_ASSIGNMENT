///////////////////////////////////////////////////////
//
//  File name :     assignment42-1.c
//  Descreption :   write a recursive program which accept number from user and display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  intput = 5
//  output  :   5 *  4 *  3 *  2 *  1 *
///////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 1;

    for(i = iNo ; i >= 1 ; i--)
    {
        printf("%d \t*\t ",i);
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