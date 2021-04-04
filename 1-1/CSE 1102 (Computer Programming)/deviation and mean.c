#include<stdio.h>
double std_dev(int arr[],int n)
{
    int i;
    double mean,result,sum=0;
    for(i=0;i<n;i++)
        sum+=arr[i];
        mean=sum/(double)n;
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=pow((arr[0]-mean),2);
        }
        result=(double)sum/n;
        result=sqrt(result);

        return result;
}

int main()
{
    int arr[100],n,i;
    printf("Enter the number of element for the array:\n");
    scanf("%d",&n);

    printf("Enter the Array:\n");
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);

        printf("The standard deviation is: %0.4lf\n",std_dev(arr,n));

    return 0;
}
