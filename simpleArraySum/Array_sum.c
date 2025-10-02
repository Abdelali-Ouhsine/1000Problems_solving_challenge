#include <stdio.h>

int     array_sum(int array[], int size)
{
    int i;
    int j;
    int sum;
    sum = 0;
    i = 0;
    while (i < size)
    {
        //printf("thata my array%ls\n",array);
        sum += array[i];
        i++;
    }
    return sum;
}

int main()
{
    int array[] = {1,2,6,9,8,7,6,5};
    int size = 8;
    int result = array_sum(array,size);
    printf("the result\t%d\n",result);
    return 0;
}