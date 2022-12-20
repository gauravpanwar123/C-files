//SUM of digits of a number

#include<stdio.h>

int sum_of_digits(int n)
{
    int sum_of_digits =0;
    while (n!=0)
    {
        sum_of_digits = sum_of_digits + n%10;
        n=n/10;
    }
    return sum_of_digits;
}
int main()
{
    int n;
    printf("\nEnter the number :");
    scanf("%d",&n);
    printf("\nSum of digits of %d is %d", n , sum_of_digits);
    return 0;
}
