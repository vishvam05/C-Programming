#include<stdio.h>
int main()
{
    int a=9,*p;
    p=&a;
    printf("address of p is %p\n",&p);
    printf("address of a variable is %p\n",&a);
    printf("value of p is %d\n",*p);
    printf("value of a is %d\n",a);
}
