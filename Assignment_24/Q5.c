///////////////////////////////////////////////////////
//
//  File name   :  assignment24-5.c
//  Descreption :  Write a program which accept string from user and display it inn reverse order.
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025

// Input : MarvellouS

// Output : SuollevraM
//
///////////////////////////////////////////////////////

void Reverse (char *str)
{
    int iCnt = 0;


    while (str[iCnt] != '\0')
    {
        iCnt++;
    }

    iCnt--;

    while (iCnt >= 0)
    {
        printf("%c",str[iCnt]);
        iCnt--;
    }
    
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    Reverse(arr);
    
    return 0;
}