#include <stdio.h>

int     array_sum(int array[], int size)
{
    int i;
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
	int size;
	int array[];

	printf("enter your array elements\n");
	scanf("%d",&array);

	printf("enter your element size\n");
	scanf("%d",size);

	int result = array_sum(array,size);
	printf("the result\t%d\n",result);
    return 0;
}
