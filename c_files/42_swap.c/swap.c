void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int main()
{
	int *a = 20;
	int *b = 10;
	ft_swap(a,b);

	printf("%ls %ls after the process",a,b);
}