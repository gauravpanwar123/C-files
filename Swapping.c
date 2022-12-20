//Swap two numbers without third variable

#include<Stdio.h>

int main()
{
    int a,b;
    printf("Enter the two numbers  ");
    scanf("%d %d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Numbers after swapping : %d %d", a ,b);
    return 0;
}