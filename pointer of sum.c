#include<stdio.h>
int main()
{
    int first,sum,second,*p,*q;
    printf("enter 2 values: ");
    scanf("%d%d",&first,&second);
    p=&first;
    q=&second;
    sum=*p+*q;
    printf("sum of these values is :%d",sum);
}
