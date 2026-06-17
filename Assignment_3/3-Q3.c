///////////////////////////////////////////////////////
//
//  File name :     assignment3-3.c
//  Descreption :   accept  no from user & print even factor that no
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025

//  Input   : 36               
//  Output  : 2  6  12  18

///////////////////////////////////////////////////////




void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1;i <= iNo   ;i++)
    {
        if((iNo % 2 == 0) &&  (i % == 0))
        {
            printf("%d\n",i);

        }

    }
}
int main()
{
    int iValue = 0;

    printf("Enter number \n");

    scanf("%d",&iValue);

     DisplayEvenFactor( iValue  );

    
    return 0;
}