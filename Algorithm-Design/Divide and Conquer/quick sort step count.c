#include <stdio.h>
int count=0;
int partition(int arr[],int low,int high)
{
    int p=arr[low];
    int i=low;
    int j=high;
    while (i<j)
    {
        while(arr[i]<=p)
        {
            count++;
            i++;
        }
        while(arr[j]>p)
        {
            counr++;
            j--;
        }
        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        count++;
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi - 1);
        quickSort(arr,pi + 1,high);
    }
}
int main()
{
    int t;
    printf("Enter the size of array");
    scanf("%d",&t);
    int arr[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,t-1);
    for (int i=0;i<t;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("number of comparision is %d",count);
    return 0;
}
