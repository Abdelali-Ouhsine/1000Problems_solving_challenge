#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	int mark;

	ft_putstr("enter your mark");
	scanf("%d",&mark);

	if(mark >= 50)
	{
		ft_putstr("Pass");
	}
	else
		 ft_putstr("Fail");
}
