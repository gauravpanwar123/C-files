//LCM of two numbers

#include<stdio.h>
int main()
{
    int a,b,LCM;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a,&b);

    LCM = (a>b) ? a:b ;
    while(1)
    {if( LCM%a == 0 && LCM%b == 0)
    {
        printf("\nLCM of %d and %d is %d\n", a, b, LCM);
        break;
}
++LCM;
}
return 0;
}