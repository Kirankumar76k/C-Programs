#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("enter a number to print sum of even");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(i%2==0)
        {
          sum=sum+i;
        }
    }
    printf("sum of even are :%d",sum);

}
