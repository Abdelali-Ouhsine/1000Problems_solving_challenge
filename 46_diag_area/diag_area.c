#include <stdio.h>
#include <math.h>

int	main()
{
	double	diag;
	double	side;
	double	area;

	printf("enter first the side then the diagonale of the rectangle\n");
	scanf("%lf %lf", &diag, &side);
	area = sqrt(diag * diag - side * side);
	double other_area = side * area;
	printf("thats the area of that rectangle %lf",other_area);
	return 0;
}
