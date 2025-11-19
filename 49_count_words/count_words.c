
int	count_words(char *str)
{
	int	i;

	i = 0;

	while(str[i])
	{
		if(str[i] != ' ')
		{
			i++;
		}
		i++;
	}
	return i;
}
#include <stdio.h>
int main()
{
	char test[100] = "thats the shredder ego";
	printf("thats the number of the words in that string %d",count_words(test));
	return 0;
}
