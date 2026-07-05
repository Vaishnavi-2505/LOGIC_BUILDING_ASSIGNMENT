///////////////////////////////////////////////////////
//
//  File name :     assignment40-5.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   a  b  c  d  e

///////////////////////////////////////////////////////

void Display(int iNo)
{
    static int ch = 'a';

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