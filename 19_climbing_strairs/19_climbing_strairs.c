
int    Climbing_stairs(int n)
{
	int dp [n + 1];
	
	if( n == 0 || n == 1)
		return 1;

	dp[0] = 1;
	dp[1] = 1;
	int i = 2;
	while(i <= n)
	{
		dp[i] = dp[i - 1] + dp[i - 2];// thats call the rule of sum or addition principale
		i++;
	}
		return dp[n];
}

#include <stdio.h>
int main()
{
	    int nb = 3;
        printf("enter your number\n");
        scanf("%d",&nb);
	    printf("the ways of the reach %d is %d\n",nb,Climbing_stairs(nb));
	    return 0;
}