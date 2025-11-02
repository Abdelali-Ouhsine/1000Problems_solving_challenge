#include <unistd.h>

void    ft_putchar(char b)
{
    write(1, &b, 1);
}

int main(int argc, char *argv[])
{
    (void)argc;
    int j;
    int k;

    j = 1;
    while (argv[j])
    {
        k = 0;
        while (argv[j][k])
        {
            ft_putchar(argv[j][k]);
            k++;
        }
        j++;
        ft_putchar('\n');
    }
    
}
