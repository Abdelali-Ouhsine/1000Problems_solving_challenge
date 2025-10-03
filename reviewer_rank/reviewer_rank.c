#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int    ft_reviewer_rank(int *a, int *b)
{
    int i;

    i = 0;
    while (a[i] != b[i])
    {
            if (a[i] > b[i])
               ft_putstr("Alice is reward 1 point\n"); 

            if(a[i] < b[i])
               ft_putstr("Bob is reward 1 point\n");

                i++;
    }
    ft_putstr("neither person receives a point\n");
    return 0;
}

int main()
{
    int a[4] = {2,4,8};
    int b[4] = {1,5,8};

    ft_reviewer_rank(a,b);
}