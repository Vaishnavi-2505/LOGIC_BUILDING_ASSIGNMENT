////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment22-Q3.c
//  Descreption :  Accept Character from user and check whether it is digit or not (0-9).
//  Author      :   Vaishanvi D Shingare
//  Date        :     28/04/2025

// input : 7
//  output : TRUE

// input : d
//  output : FALSE

////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
    return FALSE;

}

int main()
{
    char cValue = '0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("it is Digit");
    }
    else
    {
        printf("it is not a Digit ");

    }

    return 0;
}