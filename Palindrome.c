//Palindrome or not

#include<stdio.h>
int main()
{
    int n , reverse=0 , remainder, number;
    printf(" Enter a integer : ");
    scanf("%d", &n);

    number = n;

    while(n!=0)
    {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n /= 10;
    }
    if (number == reverse)
    printf("\n %d is a Palindrome\n" , number);
    else 
    printf("\n%d is not a Palindrome\n", number);
    return 0;
}
