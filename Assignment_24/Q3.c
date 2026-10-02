///////////////////////////////////////////////////////
//
//  File name :     assignment24-3.c
//  Descreption :   Write a program which accept string from user and display it in reverse order.
//  Author :        Vaishanvi D Shingare
//  Date :          11/05/2025
//
// input :  "MarvellouS"
// output : 6

///////////////////////////////////////////////////////

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <='z'))
        {
            iSmall++;
        }
        else if ((*str >= 'A') && (*str <='Z'))
        {
            iCapital++;
        }
        str++;   
    }
    return iSmall - iCapital;
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}