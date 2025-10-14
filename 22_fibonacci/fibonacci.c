int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	return (0);
}
#include <stdio.h>
int main()
{
    int index = 7;
    int result = ft_fibonacci(index);
    printf("the fibonacci of %d is \t%d",index,result);
    return 0;
}