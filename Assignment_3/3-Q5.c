///////////////////////////////////////////////////////
//
//  File name :     assignment3-5.c
//  Descreption :   accept on charater from user &check whether that charcter is vowel(a,e,i,o,u)or not
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//  
//  Input:           E        Output:  TRUE
//  Input:           d       Output:  FALSE
///////////////////////////////////////////////////////


typedef int BOOL  ;
 
#define TRUE   1
#define FALSE  0

BOOL ChkVowel(char ch )
{
     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
        {
            return TRUE;
        }

     else 
     {
        return FALSE;
     }
}

int main()
{
    char CValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");

    scanf("%c",&CValue);

    bRet = ChkVowel(CValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");

    }
    return 0;
}