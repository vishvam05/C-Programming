#include<stdio.h>
int main()
{
    char a,b;
    printf("enter the 2 values :");
    scanf("%c %c",&a,&b);
    printf("address of given values is %p & %p\n",&a,&b);
    printf("value of given values is %c & %c",a,b);
}
