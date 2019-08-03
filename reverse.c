#include<stdio.h>
void main()
{
    int n,rem=0,rev=0;
    printf("enter a number to print reversal of a number\n");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d is reversal of given number",rev);
}
