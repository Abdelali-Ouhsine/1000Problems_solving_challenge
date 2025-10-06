
int	string_lenght(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

#include <stdio.h>
int main()
{
	char str[] = "Shredder ego";
	int result = string_lenght(str);
	printf("the lenght of that string is %d\t",result);
	return 0;
}
