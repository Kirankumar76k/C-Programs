#include<stdio.h>
void main()
{
    int n,i,k;
    printf("enter a no. to print a multiplication table:");
    scanf("%d",&n);

    for(i=1;i<=12;i++)
    {
        k=n*i;
        printf("%d*%d=%d\n",n,i,k);

    }
}
