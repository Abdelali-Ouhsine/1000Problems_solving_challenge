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