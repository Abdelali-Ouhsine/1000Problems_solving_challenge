/*#include <unistd.h>
#include <stdio.h>

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
*/
#include <stdio.h>
#include <unistd.h>

void	ft_puctchar(char c)
{
	write(1, &c ,1);
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

void	chatai()
{
	char	*answer[100];
	char	*flag = "red flag";
	char	*age = "40 yo";
	char	*goals= "950 goals"

	ft_putstr("enter your answer here: ");
	scanf("%c", answer);

		 if (nswer = flag)
	{
		printf("red flag\n");
	}
		if (answer = age)
	{
		printf("40 yo\n");
	}
		if (answer = goals)
	{
		printf("950 goal\n");
	}
		else
		printf("i dont have answer for this question");
}

int	ain
