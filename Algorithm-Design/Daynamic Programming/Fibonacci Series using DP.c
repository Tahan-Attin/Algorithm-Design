#include <stdio.h>
int nthFibonacciUtil(int n, int memo[])
{
    if (n <= 1)
    {
        return n;
    }
    if (memo[n] != -1)
    {
        return memo[n];
    }
    memo[n] = nthFibonacciUtil(n - 1, memo)
              + nthFibonacciUtil(n - 2, memo);

    return memo[n];
}
int nthFibonacci(int n)
{
    int memo[n + 1];
    for (int i = 0; i <= n; i++)
    {
        memo[i] = -1;
    }
    return nthFibonacciUtil(n, memo);
}

int main()
{
    int n = 5;
    for(int i=0; i<=n; i++)
    {
        printf("%d ",nthFibonacci(i));
    }
    return 0;
}
