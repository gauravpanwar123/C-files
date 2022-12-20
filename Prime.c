//Prime number or not

#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    for(i=2; i<=2; i++)
    {
        if(n%i==0)
    {
        break;
    }
    }
    if(i>n/2)
    printf("\n%d is a prime number\n",n);
    else
    printf("\n%d is not a prime number\n",n);
    return 0;
}