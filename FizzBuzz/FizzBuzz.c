#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 ,&c , 1);
}

void	ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    fizzbuzz(int n)
{
    
      if(n % 3 == 0 && n % 5 == 0)
    {
        ft_putstr("FizzBuzz\n");
    }
    else if(n % 3 == 0)
    {
        ft_putstr("Fizz\n");
    } 
    else if (n % 5 == 0)
    {
        ft_putstr("Buzz\n");
    }
}
int main()
{
    // three and five test
    fizzbuzz(3);
    fizzbuzz(6);
    fizzbuzz(9);
ft_putstr("\n");
    // three test
    fizzbuzz(5);
    fizzbuzz(10);
    fizzbuzz(15);
ft_putstr("\n");
    //no multipe test
    fizzbuzz(4);
    fizzbuzz(7);
    fizzbuzz(9);
}