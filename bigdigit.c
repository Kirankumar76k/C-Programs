#include<stdio.h>
void main()
{
    int n,big=0,rem=0;
    printf("enter a no");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem>big)
        {
            big=rem;
        }
        n=n%10;
    }
    printf("%d is big in given no.",big);
    }
