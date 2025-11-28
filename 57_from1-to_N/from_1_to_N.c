#include <stdio.h>

void    from1toN()
{
   long int n;
    printf("enter the number");
    scanf("%ld",&n);
    int counter = 0;

    while (counter <= n)
    {
        printf("%d ",counter);
        counter++;
    } 
}

int main()
{
    from1toN();
    return 0;
}