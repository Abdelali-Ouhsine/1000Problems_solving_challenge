
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

void	ft_putstr(char *str)
{
	int i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	space_remove(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] != ' ')
		{
			ft_putchar(str[i]);
			
		}
		i++;
	}
}

#include <stdio.h>
int main()
{
	char test[100] = "shredder ego";

	space_remove(test);
	return 0;
}
