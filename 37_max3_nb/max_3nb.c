
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
	int nb1;
	int nb2;
	int nb3;

	printf("enter three numbers to compare it");
	scanf("%d %d %d",&nb1,&nb2,&nb1);

	if (nb1 > nb2 && nb3)
	{
		ft_putstr("the first number is the bigger");
	}
	if (nb2 > nb1 && nb3)
	{
		ft_putstr("the second number is the bigger");
	}
       	if (nb3 > nb1 && nb2)
	{
		ft_putstr("the third number is the bigger");
	}
}
