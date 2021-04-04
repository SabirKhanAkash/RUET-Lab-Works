#include<stdio.h>
#define ROWS 3
#define COLUMNS 4
void sub1(int z[][COLUMNS]);
main()
    {
    static int z[ROWS][COLUMNS]={1,2,3,4,5,6,7,8,9,10,11,12};
    sub1(z);
}
void sub1(int x[][4])
{
    int a,b,c;
    for(b=0;b<COLUMNS;b++) {
        c=0;
        for(a=0;a<ROWS;a++)
            if(x[a][b]>c)
            c=x[a][b];
        printf("%d\t",c);
    }
    return 0;
}
