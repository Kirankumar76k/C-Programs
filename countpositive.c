#include<stdio.h>
void main()
{
    int a[5],i,p=0,q=0;
    for (i=0;i<5;i++)
    {
    printf("enter %d position:",i);
    scanf("%d",&a[i]);
    }
     for (i=0;i<5;i++)
    {
    if(a[i]>0)
    {
        p++;
    }
    else
    {
        q++;
    }
    }
    printf("%d positives in given array \n",p);
    printf("%d negatives in given array",q);

}
