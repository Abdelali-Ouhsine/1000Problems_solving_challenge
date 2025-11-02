
#include <stdio.h>
void	swap(int nb1,int nb2)
{
	int	temp;//create that temporary for store the valeus in the process
		     
	printf("enter to numbers\n");
	scanf("%d %d",&nb1,&nb2);

	temp = nb1;
	nb1 = nb2;
	nb2 = temp;
	//dispay that two numbers after swap
	printf("the numbers after process nb1 :%d\n nb2:%d",nb1,nb2);
}

int main()
{
	int nb1 = 10;
	int nb2 = 20;

	swap(nb1,nb2);
	return 0;
}

