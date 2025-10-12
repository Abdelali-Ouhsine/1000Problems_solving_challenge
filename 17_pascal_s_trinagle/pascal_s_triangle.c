/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:

Input: numRows = 1
Output: [[1]]

 

Constraints:

    1 <= numRows <= 30
*/

#include <stdio.h>
int	ft_power(int nb,int power)
{
	int	i;
	int	j;
	i = 1;
	j = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		j = j * nb;
		i++;
	}
	return (j);
}

int	pascals_triangle(int nb)
{
	int a = 0;;
	int b = 0;
	int numrows;
	printf("enter your number");
	scanf("%d",&nb);
	if(nb)
	{
	numrows = 1 * ft_power(a,2) + 2 * (a + b) + 1 * ft_power(b,2);
	}
	return numrows;
}

#include <stdio.h>
int main()
{
	int nb = 1;
	int result = pascals_triangle(nb);
	printf("the number of rows is %d",result);
	return 0;
}