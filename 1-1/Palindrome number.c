#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    while (num>0) {
    rev=rev*10+num%10;
    num/=10;
    }
    printf("The reverse number is: %d\n",rev);
    if(rev==num) {
    printf("The Entered number is a palindrome number!!!\n");
    }
    else printf("The entered number is not palindrome!!!\n");
    return 0;
}
