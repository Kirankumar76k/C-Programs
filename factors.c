#include<stdio.h>
void main()
{
int n,i;
printf("enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
printf("the factorial of a given number is %d\n",i);
}
}
