#include<stdio.h>
int main()
{
int marks[5],i,sum=0,avg;
printf("enter the marks :\n");
for(i=0;i<=4;i++)
{
scanf("%d",&marks[i]);
}
for(i=0;i<=4;i++)
{
printf("%d %d",i,marks[i]);
sum=sum+marks[i];
}
avg=sum/5;
printf("sum is=%d\n avg is=%d",sum,avg);
}
