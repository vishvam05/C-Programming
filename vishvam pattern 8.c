#include<stdio.h>
int main()
{
int i,sp,st;
for(i=1;i<=5;i++)
{
for(sp=1;sp<=5-i;sp++)
{
printf(" ");
}
for(st=1;st<=i;st++)
{
printf("%d ",i);
}
printf("\n");
}
}
