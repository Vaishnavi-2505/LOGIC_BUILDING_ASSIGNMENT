///////////////////////////////////////////////////////
//
//  File name :     assignment42-2.c
//  Descreption :   write a recursive program which accept number from user and return summation of its digits.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  input  :    876
//  output  :   19
///////////////////////////////////////////////////////

int  Sum(int iNo)
{
    static int iSum = 0 ;

        if(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            Sum(iNo/10);
        }
        return iSum;

    

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d",iRet);


    return 0 ;
}