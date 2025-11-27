#include <stdio.h>
#include <math.h>

void    described_around()
{
    int   a;
    int   b;
    int   c;
    float pi = 3.24;
   
    printf("enter a and b and c for calculate the circle");
    scanf("%d %d %d",&a,&b,&c);
     float   p = ((a + b + c) / 2);
     float area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("thats the area of that circle%f", area);
}

int main()
{
    described_around();
    return 0;
}