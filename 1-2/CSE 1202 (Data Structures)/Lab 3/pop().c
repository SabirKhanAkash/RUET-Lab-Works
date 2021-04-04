#include<stdio.h>
int main()
{
    if (top==-1) {
        printf("Array is Empty. pop is not possible. . .\n");
        return;
    }
    else {
        top-=1;
        printf("Pop done successfully. . .\n");
        return;
    }

    return 0;
}
