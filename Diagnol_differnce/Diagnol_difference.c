#include <stdio.h>

int   ft_diagnol_differnce()
{ 
    int a, b, c , d, e, f;
    int array1[3][3][3];
    int sum;
    int sum1;
    int result;

   
    printf("Enter the three lines of your square (3 numbers):\n");
    for (int i = 0; i < 3; i++) {
    scanf("%d", &array1[i][0][0]);
    }

    if(array1[a][b][c])
    {
        sum  = a + b + c;
    }

    if (array1[a][b][c])
    {
       sum1 = a + b + c;
    }
    result = sum - sum1;
    return result;
}

int main()
{
    ft_diagnol_differnce();
}

