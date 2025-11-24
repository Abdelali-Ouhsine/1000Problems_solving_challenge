
#include <stdio.h>

void    inscribed_triangle()
{

    float   a;
    float   b;
    float   area;
    float   pi = 3.14;

    printf("enter a and b of the triangle/n");
    scanf("%f %f", &a,&b);
    area = ( pi * b * b /4) * ((2 * a - b) / (2 * a + b));
    printf("thats the area of that ciecle%f", area);
}

int main()
{
    inscribed_triangle();
    return 0;
}
