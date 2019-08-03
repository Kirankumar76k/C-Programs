#include<stdio.h>
void main()
{
int t,h,e,m,sc,so;float avg;
printf("enter the marks of each subject");
scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&sc,&so);
int tot=0;
tot=t+h+e+m+sc+so;
avg=tot/6;
printf("total marks :%d",tot);
printf("average :%2.2f",avg);
if((t<35)||(h<35)||(e<35)||(m<35)||(sc<35)||(so<35)||(avg<35))
{
printf("fail");
}
else if((avg>=35)&&(avg<40))
{
printf("grade : 'P'");
}
else if((avg>=40)&&(avg<50))
{
printf("grade : 'c'");
}
else if((avg>=50)&&(avg<60))
{
printf("grade : 'B+'");
}
else if((avg>=60)&&(avg<70))
{printf("grade : 'A'");
}
else if((avg>=70)&&(avg<80))
{
printf("grade : 'A+'");
}
else
{
printf("grade : 'O'");
}
}
