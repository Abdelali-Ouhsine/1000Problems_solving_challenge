
#include <stdio.h>

int main()
{
	int	mark;
	int	mark1;
	int	mark2;
	int	average;

	printf("enter your three matks ");
	scanf("%d %d %d",&mark,&mark1,&mark2);

	average = (mark + mark1 + mark2) / 3;
	printf("the average of that thee numbers is %d",average);
}
