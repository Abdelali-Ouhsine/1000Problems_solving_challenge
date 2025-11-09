#include <stdio.h>

int main()
{
	double	und;
	double	hight;
	double	area;
	printf("enter the under and the hight of your triangle");
	scanf("%lf %lf",&und, &hight);

	area = und/2 * hight;
	printf("thats the area of that traingle %lf",area);
	return 0;
}
