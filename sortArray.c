#include<stdio.h>
void main()
{
    int a[5],i,j,temp=0;
    for (i=0;i<5;i++)
    {
    printf("enter %d position:",i);
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
    printf("%d is sorted array %d\n",i,a[i]);
    }
}
