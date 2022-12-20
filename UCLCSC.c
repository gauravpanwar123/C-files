// Uppercase, Lowercase or special character

#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c", &ch);
    if( ch >= 'a' && ch <= 'z')
    printf("it is lowercase");
    else if(ch >= 'A' && ch <= 'Z')
    printf("it is uppercase");
    else if ( ch >=48 && ch <= 57)
    printf("number");
    else
    printf("Symbol");
    return 0;
}