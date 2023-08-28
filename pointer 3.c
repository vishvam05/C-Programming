#include<stdio.h>
int *p,a,b,*q;
int point()
{
    printf("enter 2 values :");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("address of a and b is %p\n",&a,&b);
    printf("address of p and q is %p\n",&p,&q);
    printf("value of a and b is %d\n",a,b);
    printf("value of p and q is %d",*p,*q);
}
int main()
{
    point();
}
