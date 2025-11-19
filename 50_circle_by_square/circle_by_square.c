#include <stdio.h>

void	circle_by_area()
{

	float	area;
	int	a;
	float	pi = 3.14;
	printf("enter the value of a");
	scanf("%d", &a);

	area = (pi * (a * a)) /4;

	printf("the circle area is %f", area);
	
 }

int main()
{
	circle_by_area();
	return 0;
}
