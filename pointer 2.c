#include<stdio.h>
int number,*p;
int point()
{
    printf("enter the number: ");
    scanf("%d",&number);
    p=&number;
    printf("address of p variable is %p\n",&p);
    printf("address of number is :%p\n",&number);
    printf("value of number is %d\n",number);
    printf("value of p variable is %d\n",*p);
}
int main()
{
    point();
}
