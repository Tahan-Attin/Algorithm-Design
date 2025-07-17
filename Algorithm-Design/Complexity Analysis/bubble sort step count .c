#include<stdio.h>
arr[100];
void input_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void bubble(int n){
    int count=0;
    int step_count = 0;
    for(int i=0;i<n-1;i++)
    {
        count++;

        for(int j=0;j<n-i-1;j++)
        {
             step_count++;
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
    printf("The sorted array is \n");
    for(int i=0;i<n;i++)
    {
         printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Total number of comparisons in first loop (steps) = %d\n",count);
    printf("Total number of comparisons (steps) = %d\n", step_count);
}
int main()
{
    int a,size;
    printf("enter the size of array ");
    scanf("%d",&size);
    input_arr( size);
    bubble(size);

}

