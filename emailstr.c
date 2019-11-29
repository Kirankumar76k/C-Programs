void main()
{
    char str[20];
    int i,q=0,p=0;
    printf("enter a email");
    gets(str);
    for(i=0;str[i]!=0;i++)
    {
       if(str[i]=='@')
    {
        p=i;
    }
    else if(str[i]=='.')
    {
        q=i;
    }
    }
    if(p<q)
    {
        printf("valid email");
    }
    else
    {
        printf("invaild email");
    }
}
