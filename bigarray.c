#include<stdio.h>
void main()
{
    int a[5],i,big=0;
    for (i=0;i<5;i++)
    {
    printf("enter %d position:",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
     if(a[i]>a[i+1])
     {
         big=a[i];
     }
    }
    printf("%d is the biggest in given array",big);
    }
