#include<stdio.h>
#define ROWS 3
#define COLUMNS 4
int z[ROWS][COLUMNS] ={1,2,3,4,5,6,7,8,9,10,11,12};
int main()
{
    int a,b,c;
    for(a=0;a<ROWS;++a) {
        c=999;
        for(b=0;b<COLUMNS;++b)
            if(z[a][b]<c)
                c=z[a][b];
                printf("%d",c);
    }
}
