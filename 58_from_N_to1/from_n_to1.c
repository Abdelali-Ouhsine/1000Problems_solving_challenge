#include <stdio.h>

void    fromnto1()
{
     long int n;
    printf("enter the number ");
    scanf("%ld",&n);
    int counter = 1;

    while (counter <= n)
    {
        printf("%ld ",n);
        n--;
    } 
}

int main()
{
    fromnto1();
    return 0;
}