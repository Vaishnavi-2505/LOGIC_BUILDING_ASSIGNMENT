/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     assignment23-Q2.c
//  Descreption :   Accept character from user. If character is small display its
//                  corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.

/* input:Q
   output:q

   input:m
   output:M

   input:4
   output:4

   input:%
   output:%

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z' )
    {
            ch = ch + 32;
        
        
    }
    else if (ch >= 'a' && ch <= 'z')
    { 
        ch = ch - 32;
        
    }
    printf("Output : %c\n", ch);

    
}
int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
    
}