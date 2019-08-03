#include<stdio.h>
void main()
{
    int n,c=0,target=0,rev=0,rem=0,loc=0;
    printf("enter number to check target is present or not\n");
    scanf("%d",&n);
    printf("enter a target digit");
    scanf("%d",&target);
    while(n>0)
        c++;
    {
        rem=n%10;
        if(target==rem)
        {
            loc++;
            break;
        }
        n=n/10;
    }
    if(loc==c)
    {
        printf("target digit found\n");
        printf("%d is the location of %d",loc,target);
    }
    else
    {
        printf("not found");
    }
}
