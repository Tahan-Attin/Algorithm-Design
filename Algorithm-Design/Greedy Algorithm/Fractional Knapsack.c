#include<stdio.h>
#include<math.h>
void sort(double ratio[],double value[],double weight[],double n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {

                double temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;


                temp = value[i];
                value[i] = value[j];
                value[j] = temp;


                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%lf ",ratio[i]);
    }
}
void kanpsak(int n,double w,double weight[],double value[])
{
    double total_value=0.0;
    double Remaining_capcity=w;
    double fraction;
    for(int i=0;i<n;i++)
    {
        if(weight[i]<=Remaining_capcity)
        {
            total_value+=value[i];
            Remaining_capcity-=weight[i];
        }
        else
        {
            fraction=Remaining_capcity/weight[i];
            total_value+=value[i]*fraction;
            Remaining_capcity=0;
            break;
        }
    }
    printf("\n");
    printf("%lf",total_value);
}
int main()
{
   double value[10],weight[10],n,w;
   double ratio[10];
   printf("enter the number of weight and value");
   scanf("%lf",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%lf",&value[i]);
       scanf("%lf",&weight[i]);
   }
   printf("Enter the weight ");
   scanf("%lf",&w);
   for(int i=0;i<n;i++)
   {
       ratio[i]=value[i]/weight[i];
   }
   sort(ratio,value,weight,n);
    kanpsak(n,w,weight,value);
}
