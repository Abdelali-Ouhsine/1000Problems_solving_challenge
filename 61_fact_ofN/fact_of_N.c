#include <stdio.h>

void    fact_of_n()
{
    int nb = 0;
    int fact = 0;
    int counter = 1;

    printf("enter your number for calculate his factorial");
    scanf("%d", &nb);
    while(counter <= nb)
    {
        if(nb >= 1)
        {
            fact = nb * nb - 1;
        }
        counter++;
    }
    
    printf("thats the factorial of %d : %d",nb,fact);
}

int main()
{
    fact_of_n();
    return 0;
}

