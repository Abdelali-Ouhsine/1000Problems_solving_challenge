
char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z') ||
					(str[i] >= 'A' && str[i] <= 'Z')) && (str[i - 1] < '0' ||
					(str[i - 1] > '9' && str[i - 1] < 'A') ||
					(str[i - 1] > 'Z' && str[i - 1] < 'a') ||
					str[i - 1] > 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char str[] = "thats Shredder ego you kan know if you know";
	char *res =ft_strcapitalize(str);
	printf("thats the str after the process	\n%s",res);
	return 0;
}
