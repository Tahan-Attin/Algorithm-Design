#include<stdio.h>
int arr[100];
int found;
void input_arr(int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void sarch_arr(int size,int k)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==k)
        {
             found=i;
        }
        count++;
    }
    printf("The Number of comparision is %d \n",count);
    if(found)
    {
        printf("index is =%d",found);
    }
    else
        printf("not found");
}
int main()
{
    int a;
    int size;
    printf("enter the size ");
    scanf("%d",&size);
    input_arr(size);
    printf("\n");
    printf("Enter the element you want to find ");
    scanf("%d",&a);
    sarch_arr(size,a);
    return 0;
}
