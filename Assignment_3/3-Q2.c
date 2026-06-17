///////////////////////////////////////////////////////
//
//  File name :     assignment3.c
//  Descreption :   accept  no from user & print even factor of that no
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025

//  Input   :          24     
//  Output  : 1  2  4  8   12

///////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo ;i++)
    {
        if( iNo % i == 0 )
        {
        printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}