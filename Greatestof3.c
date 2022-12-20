//Greatest of 3 numbers

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers");
    scanf("%d %d %d", &a, &b ,&c);
    if ( a>b && a>c)
    printf("\nThe largest among the three numbers is %d",a);
    if ( b>a && b>c )
    printf("\nThe largest among the three numbers is %d",b);
    else
    printf("The largest among the three numbers is %d",c);
    return 0;
}