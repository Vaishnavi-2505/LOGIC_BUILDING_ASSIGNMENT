////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment22-Q4.c
//  Descreption  :  Accept Character from user and check whether it is small case or not (a-z).
//  Author      :   Vaishanvi D Shingare
//  Date        :   28/04/2025

// input : g  

//  output : TRUE

// input : G  

//  output : TRUE

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 'a'  && ch <= 'z' )
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }
    return 0;
}
