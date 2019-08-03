#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter a number to print multiplication table\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=12;j++)
        {
        printf("\t\t\t\t\t%d*%d=%d\n",i,j,(j*i));
    }
    }

}
