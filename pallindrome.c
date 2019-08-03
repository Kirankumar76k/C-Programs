
#include<stdio.h>
void main()
{
    int n,c,0rem=0,rev=0;
    printf("enter a number to check pallindrome of a number\n");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(c==rev)
    {
        printf("%d is pallindrome ",c);
    }
    else
    {
        printf("not pallindrome");
    }
}
