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
        while ((*str == '+' && *str == '-') || *str == 32)
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
#include <unistd.h>
#include <stdio.h>
int main()
{
    char str[] = "++--2123456abcd";
    printf("%d",ft_atoi(str));
    return 0;
}