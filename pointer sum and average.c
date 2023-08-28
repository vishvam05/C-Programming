#include<stdio.h>
int avg,sum,e;
int total(int *a,int *b)
{
    sum=*a+*b;
    printf("sum of these values are %d\n",sum);
}
int average(int *c,int *d)
{
    avg=*c+*d;
    e=avg/2;
    printf("average of these two values are :%d",e);
}
int main()
{
    int a,b,c,d;
    printf("enter the two valaue for sum: ");
    scanf("%d%d",&a,&b);
    printf("enter the two values for average");
    scanf("%d%d",&c,&d);
    total(&a,&b);
    average(&c,&d);
}
