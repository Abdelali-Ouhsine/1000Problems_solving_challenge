
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main()
{
	int	mark;
	int	mark1;
	int	mark2;
	int	average;

	printf("enter your three marks\n ");
	scanf("%d  %d %d",&mark,&mark1,&mark2);

	average = (mark + mark1 + mark2) / 3;
	if(average >= 50)
	{
		printf("%d",average);
		ft_putstr("Pass by :");
	}
	else
	{
		printf("%d",average);
		ft_putstr("Fail by :");
	}
}
