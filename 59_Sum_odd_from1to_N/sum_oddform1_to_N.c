#include <stdio.h>

int    sum_odd()
{
    int   nb;
    int   counter = 0;
    int   sum = 0;

    printf("enter your number");
    scanf("%d",&nb);
    if (nb % 2 != 0)
    {
        while (counter <= nb)
        {
            counter++;
        }
        sum+= counter;
    }
    return sum;
}

int main()
{
    sum_odd();
    return 0;
}
