///////////////////////////////////////////////////////
//
//  File name :     assignment42-4.c
//  Descreption :   write a recursive program which accept number from user and return its factorial.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  input   :  5
//  output  : 120

///////////////////////////////////////////////////////

int Fact(int iNo)
{
    static int iMulti = 1;
    {
        if(iNo > 0)
        {
            iMulti = iMulti * iNo;
            Fact(iNo - 1);   
        }
        return iMulti;
    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0 ;
}