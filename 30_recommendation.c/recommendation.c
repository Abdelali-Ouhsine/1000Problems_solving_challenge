
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

	while(nb[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main()
{
	int age;
	int dive;
	int reco;

	prinf("enter your age;");
	scanf("%d",age);
	printf("if you have a driver license enter 1 and 0 if not");
	scanf("%d",drive);
	printf("if you have recommendation enter 1 and 0 if not");
	scanf("%d",reco);

	if(age >= 21 && drive == true || reco == true)
	{
		ft_putstr("Hired");
	}
	else
		ft_putstr("Rejected");
}
