///////////////////////////////////////////////////////
//
//  File name :     assignment40-4.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   A  B  C  D  E

///////////////////////////////////////////////////////

void Display(int iNo)
{
    static int ch = 'A';

    if(iNo > 0)
    {
        printf("%c\t",ch);
        ch++;

        Display(iNo - 1);
        
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