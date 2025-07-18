#include<stdio.h>
#include<math.h>
void sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void greedy(int a[],int n,int amount)
{
    sort(a,n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        while(amount>=a[i])
        {
            amount=amount-a[i];
            count++;
        }
    }
    printf("the number of coin is %d",count);
}
int main()
{
    int n,amount;
    printf("enter the amount");
    scanf("%d",&amount);
    printf("enter how many coin you want to insert");
    scanf("%d",&n);
    int a[n];
    printf("enter the value of coin");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    greedy(a,n,amount);
}
