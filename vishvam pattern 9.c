#include<stdio.h>
int main()
{
int i,st,sp,p=1;
for(i=1;i<=9;i++)
{
for(sp=1;sp<=9-i;sp++)
{
printf(" ");
}
for(st=1;st<=i;st++)
{
printf("%d ",p);
p++;
}
printf("\n");
}
}
