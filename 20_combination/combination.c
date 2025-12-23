#include <stdio.h>
#include <stdlib.h>

// Function to compute sum of first n numbers using dynamic programming
int nSum(int n) {
    int* dp = (int*)malloc((n + 1) * sizeof(int));
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] + i;
    }

    int result = dp[n];
    free(dp); // Free the allocated memory
    return result;
}

int main() {
    int n = 9; // Example input
    printf("Sum of first %d numbers is %d\n", n, nSum(n));
    return 0;
}