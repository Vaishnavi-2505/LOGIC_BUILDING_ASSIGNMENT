////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name    :  Assignment22-Q5.c
/*  Descreption :   Accept division of student from user and depends on the division
                    display exam timing. There are 4 divisions in school as A,B,C,D. Exam
                    of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
                    (Application should be case insensitive)*/

//  Author      :   Vaishanvi D Shingare
//  Date        :     28/04/2025

// input : A
//  output : Your exam at 7.0 AM

// input : B
//  output : Your exam at 8.30 AM

// input : C
//  output : Your exam at 9.20 AM

// input : D
//  output : Your exam at 10.30 AM

////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int bool ;

bool DisplaySchedule(char chDiv)
{
    if(chDiv == 'A'  || chDiv == 'a')
    {
        printf("Your exam is at 7:00 AM\n");
        return TRUE;
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam is at 8:30 AM\n");
        return TRUE;

    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam is at 9:20 AM\n");
        return TRUE;

    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam is at 10:30 AM\n");
        return TRUE; 
    }
    else
    {
        return FALSE;
    }


}
int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter your devision :");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

    if( bRet == FALSE)
    {
        printf("Invalid Divsion");
    }

    return 0;

}