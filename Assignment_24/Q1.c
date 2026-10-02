///////////////////////////////////////////////////////
//
//  File name :     assignment1-1.c
//  Descreption :   Write a program which accept string from user and count number of capital characters.
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//

//  input :  "Marvellous Multi OS"
//  output :  4
///////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <='Z'))
        {
            iCnt++;
        }
        str++;  
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}