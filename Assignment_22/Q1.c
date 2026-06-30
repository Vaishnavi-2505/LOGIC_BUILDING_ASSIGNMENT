////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment22-Q1.c
//  Descreption :  Accept Character from user and check whether it is alphabet or not (A-Z a-z).

//  Author      :   Vaishanvi D Shingare
//  Date        :     28/04/2025

// Input : F
// Output : TRUE

// Input : &
// Output : FALSE

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z' ) || (ch >= 'a' && ch <= 'z' ))
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

    bRet = ChkAlpha(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}