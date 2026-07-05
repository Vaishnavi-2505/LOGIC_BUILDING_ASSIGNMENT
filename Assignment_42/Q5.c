///////////////////////////////////////////////////////
//
//  File name :     assignment42-5.c
//  Descreption :   write a recursive program which accept number from user and return its factorial.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  input   :  523
//  output  :  30

///////////////////////////////////////////////////////

int Mult(int iNo)
{
    static int iMulti = 1;
    
        if(iNo != 0)
        {
            iMulti = iMulti * (iNo % 10);
            Mult(iNo / 10);
        }
        return iMulti;
    

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0 ;
}