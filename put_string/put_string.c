#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    put_string(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main()
{
    char str[] = "Shredder ego";
    put_string(str);
    return 0;
}
