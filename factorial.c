#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("enter a number to print factorial\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factors of %d are:%d",n,fact);
}
