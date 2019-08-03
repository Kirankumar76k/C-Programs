#include<stdio.h>
void main()
{
    int a,b,c,choice;
    printf("\t\tMENU\n");
    printf("\t[1]ADDITION\n");
    printf("\t[2]SUBTRACTION\n");
    printf("\t[3]MULTIPLICATION\n");
    printf("\t[4]DIVISION\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    printf("enter two numbers to perform operation\n");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
    case 1:

        c=a+b;
        printf("addition %d",c);
        break;
        case 2:
        c=a-b;
        printf("subtraction %d",c);
        break;

        case 3:
        c=a*b;
        printf("mul is %d",c);
        break;

        case 4:
        c=a/b;
        printf("div is %d",c);
        break;

        default:
            printf("invalid choice");
    }

    }
