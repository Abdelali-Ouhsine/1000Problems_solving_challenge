#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_atoi(char *str)
{
    int		num;
    int 	result;

    while (*str >= '0' && *str <= '9')
    {
        *str++;
        while (*str == '+' && *str == '-' || *str == 32)
    {
        result++;
        str++;
    }
    if (result % 2 != 0)
    {
        num += *str + 48;
        return(-*str);
    }
    return (*str);
    }
}

int main()
{
    char str[] = "Shredder EGO";
    ft_atoi(str);
}
