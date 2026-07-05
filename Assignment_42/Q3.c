///////////////////////////////////////////////////////
//
//  File name :     assignment42-3.c
//  Descreption :   Write a recursive program which accept string from user and count number of characters.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//   input  :  hello
//  output  :   5  
///////////////////////////////////////////////////////

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        Strlen(str + 1);

    }
    return iCnt;

}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string: ");
    scanf("%s",arr);

    iRet = Strlen(arr);
    printf("%d",iRet);

    return 0;
}