
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
	int j = 0;

	while(str[j])
	{
		if(str[j] != ' ')
		{
			ft_putchar(str[j]);	
		}
		j++;
	}
}

#include <stdio.h>
int main()
{
	char test[100] = "shredder ego";

	space_remove(test);
	return 0;
}  