#include <stdio.h>

void    sum_even()
{
    int nb = 0;
    int sum = 0;
    int counter = 1;

    printf("enter your number");
    scanf("%d", &nb);

    while (counter <= nb)
    {
        if (counter % 2 == 0)
        {
            sum += counter;
        }
        counter++;
    }
    printf("thats the sum of even numbers from %d to 1: %d ",nb,sum);
}

int main()
{
    sum_even();
    return 0;
}