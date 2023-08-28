#include<stdio.h>
int main()
{
int n,i,marks[50],sum=0,avg;
scanf("%d",&n);
printf("enter the marks :\n");
for(i=0;i<n;i++)
{
scanf("%d",&marks[i]);
}
for(i=0;i<n;i++)
{
sum=sum+marks[i];
}
avg=sum/n;
printf("sum of marks is :%d\navg of marks is :%d",sum,avg);
}
