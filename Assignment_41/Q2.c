///////////////////////////////////////////////////////
//
//  File name :     assignment40-2.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   1  2  3  4  5
///////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 1;

    while(i <= iNo)
    {
        printf("%d \t",i);
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