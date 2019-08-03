#include<stdio.h>
void main()
{
    int a[5],i,target=0,isthere=0;
    for (i=0;i<5;i++)
    {
    printf("enter %d position:",i);
    scanf("%d",&a[i]);
    }
    printf("enter the target");
    scanf("%d",&target);
    for(i=0;i<5;i++)
    {
        if(target==a[i])
        {
            isthere=1;
            break;
        }
    }
    if(isthere==1)
    {
        printf("target found");
    }
    else
    {
        printf("target not found");
    }
    }

