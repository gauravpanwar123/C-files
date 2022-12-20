// To check vowel or consonant

#include<stdio.h>

void vowel_or_consonant(char ch)
{
    if ( ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
    printf("Vowel\n");
    else
    printf("Consonant\n");
}

int main()
{
    char ch;
    printf("\nInput a character :");
    scanf("%c", &ch);
    printf("\n%c is a ",ch);
    vowel_or_consonant(ch);
    return 0;
}