#include <stdio.h>
int		count_vowels(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while(str[i])
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i' || str[i] == 'o')
		{
			j = j + 1;
		}
		i++;
	}
	return j;
}
#include <stdio.h>
int main()
{
	char str[]= "the real goat";
	int result = count_vowels(str);
	printf("%d",result);
	return 0;
}
