
#include <stdio.h>

int main()
{
	int	nb1;
	int	nb2;

	printf("enter your first number");
	scanf("%d",&nb1);

	printf("enter your second number");
        scanf("%d",&nb2);

	if(nb1 > nb2)
	{
		printf("the max number is %d", nb1);
	}
	else if (nb2 > nb1)
		printf("the max number is %d",nb2);
	else if (nb1 = nb2)
		printf("the numbers is equal");
}
