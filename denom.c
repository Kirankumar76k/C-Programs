#include<stdio.h>
int main()
{
    int rs,a,b,c,d,e,f;
    printf("enter the amount\n",rs);
    scanf("%d",&rs);
    printf("the denomination notes you enter are:\n");
    if(rs>=1000)
    {
        a=rs/1000;
        rs=rs%1000;
        printf("thousand rupees notes are:%d\n",a);
    }
    if(rs>=500)
    {
        b=rs/500;
        rs=rs%500;
        printf("five hundred rupees notes are:%d\n",b);
    }
    if(rs>=100)
    {
        c=rs/100;
        rs=rs%100;
        printf("hundred rupees notes are:%d\n",c);
    }
    if(rs>=20)
    {
        d=rs/20;
        rs=rs%20;
        printf("twenty rupees notes are:%d\n",d);
    }
    if(rs>=10)
    {
        e=rs/10;
        rs=rs%10;
        printf("ten rupees notes are:%d\n",e);
    }
    if(rs>=5)
    {
        f=rs/5;
        rs=rs%5;
        printf("five rupees notes are:%d\n",f);
    }
    return 0;
}
