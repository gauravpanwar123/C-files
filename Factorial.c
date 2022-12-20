#include<stdio.h>
#include<math.h>
int main()
{
    int i, fact=1, n;
    printf("Enter the number for factorial\n");
    scanf("%d",&n);
    if(n<0)
    printf("Error ! factorial of a negative number doesn't exist.\n");
    else
    for(i=1;i<=n;++i)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}