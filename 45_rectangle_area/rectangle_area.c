#include <stdio.h>

int	rectangle(int tall, int lerd)
{
	int	area;
	printf("enter the tall of your rectangle\n");
	scanf("%d %d", &tall, &lerd);

	area = tall * lerd;

	printf("thet area of that rectangle is %d", area);
	return 0;
}

int main()
{
	int tall = 10;
	int lerd = 20;

	rectangle(tall,lerd);
	return 0;
}
