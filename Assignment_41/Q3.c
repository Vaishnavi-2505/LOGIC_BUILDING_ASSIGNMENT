///////////////////////////////////////////////////////
//
//  File name :     assignment40-3.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   5  4   3  2  1
///////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 1;

    if(iNo == 0)
    {
        return;
    }
    {
        printf("%d \t",iNo);
        
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