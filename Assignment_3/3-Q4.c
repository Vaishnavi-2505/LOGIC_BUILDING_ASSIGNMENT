///////////////////////////////////////////////////////
//
//  File name :     assignment3-4.c
//  Descreption :   accept 1 charater & convert case of charater
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025

//  Input:           a       Output:  A
//  Input:           D        Output:  d

///////////////////////////////////////////////////////


void DisplayConvert( char   cValue)
{
    if(islower(cValue))
    {
        printf("% c ",toupper(cValue)    );
    }
    else if(isupper(cValue));
    {
        printf("%c",tolower(cValue)  );
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character \n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}