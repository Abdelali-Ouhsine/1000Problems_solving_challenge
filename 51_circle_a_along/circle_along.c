
#include <stdio.h>

void	circle_circum()

{
	float area;
	float circum;
	float pi = 3.14;
	
	printf("enter the circumference here");	
	scanf("%f",&circum);
	
	area = (circum * circum) / (4 * pi);

	printf("thats the area of your circle%f", area);
}

int main()
{
	circle_circum();
	return 0;
}
