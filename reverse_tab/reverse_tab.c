
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int tmp;

	i = 0;
    while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

#include <stdio.h>
int main()
{
	int tab[] = {1,2,3,4,5};
	int size = 6;
	ft_rev_int_tab(tab,size);
	printf("the tab after the process %ls\t",tab);
			return 0;
}
