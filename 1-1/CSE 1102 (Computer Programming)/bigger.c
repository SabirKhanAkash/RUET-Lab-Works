#include<stdio.h>
int max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
            return a;
        else
            return c;
    }
    else if(b>c)
    {
        if(b>a)
            return b;
        else
            return c;
    }
    else
    return c;
}
    int main()
    {
        int a,b,c;

        printf("Enter three number:\n");
        scanf("%d%d%d",&a,&b,&c);
        printf("Maximum = %d",max(a,b,c));

    return 0;
}

