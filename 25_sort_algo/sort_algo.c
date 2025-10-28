
void	sort(int *tab, int size)
{
	int	i;
	int	j;
	int tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

#include <stdio.h>
int main()
{
	int tab[100] = {1,2,3,4};
	int size = 4;

	sort(tab,size);
	printf("after process %ls ",tab);
	return 0;
}
