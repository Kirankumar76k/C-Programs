
#include<stdio.h>
void main()
{
    int a[5],i,j,temp=0;
    for (i=0;i<5;i++)
    {
    printf("enter %d position:",i);
    scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("%d \n",a[i]);
    }
}
