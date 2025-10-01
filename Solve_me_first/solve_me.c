#include <stdio.h>

int    ft_solve_me_first(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int main()
{
    int a;
    int b;
     printf("enter the first number");
    scanf("%d",&a);

    printf("enter the second number");
    scanf("%d",&b);
    
    int result = ft_solve_me_first(a,b);
    printf("%d\n",result);
    return 0;
}