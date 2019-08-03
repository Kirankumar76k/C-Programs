#include<stdio.h>
void main()
{
    int i,n,c=0;
    printf("enter a number to check prime or not\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i%n==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("%d is prime",n);
    }
    else
    {
        printf("not prime");
    }
}
