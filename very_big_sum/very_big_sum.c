/*In this challenge, you need to calculate and print the sum of elements in an array,
 considering that some integers may be very large.*/

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483647) // the minimum value of integer
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483647);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    ft_putchar(nb + '0');
}

int    big_sum(int array1[],int array2[])
{
    int result;
    int i;
    printf("enter your first large number ");
    scanf("%d", &*array1);
    printf("enter your first large number ");
    scanf("%d", &*array2);

    i = 0;
    while (array1[i] && array2[i])
    {
        ft_putnbr(array1[i] + array2[i]);
        i++;
    }
    return 0;
}

int main()
{
    int array[100] = {123};
    int array1[100] = {123};

    big_sum(array,array1);
}