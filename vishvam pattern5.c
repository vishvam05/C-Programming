#include<stdio.h>
int main()
{
int a,b,o;
printf("enter the pattern\n");
scanf("%d",&o);
for(a=1;a<=o;a++)
{
for(b=1;b<=a;b++)
{
printf("%d",a);
}
printf("\n");
}
}
