#include<stdio.h>
void main()
{
    int a[10],n,i=0,j=0;
    printf("enter the no ");
    scanf("%d",&n);

    for(i=2;i<10;i++)
    {
        for(j=i;j<i;j++)
        {
            if(i%j==0)
            {
                    scanf("%d",&a[i]);
            }
        }
    }
    for(i=0;i<10;i++)
    {
    printf("%d \n",a[i]);
    }
}

