#include<stdio.h>
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int n;
    printf("Enter how many sequence do you want to show\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d ",fibo(i));
    }
}
