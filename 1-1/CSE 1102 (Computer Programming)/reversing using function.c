#include<stdio.h>
int reverse(int n)
{
    int r=0;
    while (n!=0)
    {
        r=r*10+n%10;
        n/=10;
    }
        return r;
}
int main()
{
    int n;
    printf("Enter any positive number:\n");
    scanf("%d",&n);
    printf("Reverse is: %d\n",reverse(n));
    return 0;
}
