////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment22-Q2.c
//  Descreption :   Accept Character from user and check whether it is capital or not (A-Z).
//  Date        :     28/04/2025

// Input : F
// Output : TRUE

// Input : d
// Output : FALSE

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// input : F
//  output : TRUE

// input : d
//  output : FALSE


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if( ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("it is capital character");
    }
    else
    {
        printf("it is not a capital character");

    }

    return 0;
}