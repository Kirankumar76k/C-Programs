#include<stdio.h>
void main()
{
    int n,a=0,b=1,c=0,i;
   printf("enter a no. to generate fibonacci series");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d",c);
        c=a+b;
        a=b;
        b=c;
    }
}
