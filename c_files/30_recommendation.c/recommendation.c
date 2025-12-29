
#include <stdio.h>
#include <stdbool.h>
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
	int age;
	int drive;
	int reco;

	printf("enter your age\t");
	scanf("%d",&age);
	printf("if you have a driver license enter 1 and 0 if not\t");
	scanf("%d",&drive);
	printf("if you have recommendation enter 1 and 0 if not \t");
	scanf("%d",&reco);

	if((age >= 21 && drive == true && reco == true) || (reco == true)) 
	{
		ft_putstr("Hired");
	}
	else
		ft_putstr("Rejected");
}
