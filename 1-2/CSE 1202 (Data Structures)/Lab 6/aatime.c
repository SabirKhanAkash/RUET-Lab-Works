#include <stdio.h>
#include <time.h>
clock_t t;
void fun()
{
    printf("fun() starts \n");
    printf("Press enter to stop fun \n");
    t = clock();
    while(1)
    {
        if (getchar())
            break;
    }
    t = clock() - t;
    printf("fun() ends \n");
}
int main()
{
    fun();
    double time_taken = ((double)t)/CLOCKS_PER_SEC;

    printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}
