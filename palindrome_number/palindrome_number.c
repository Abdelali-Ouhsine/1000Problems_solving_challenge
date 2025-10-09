
#include <stdbool.h>

int	palindrome_number(int *nb,int size)
{
	int i;

	size = 3;
	i = 0;
	if(nb[i] == nb[size - 1])
	{
		return true;
	}
		return false;
}

#include <stdio.h>
int main()
{
	int size = 3;
	int nb[100];
	printf("enter your number\n");
        scanf("%ls",nb);
	printf("%d",palindrome_number(nb,size));
	return 0;
}
