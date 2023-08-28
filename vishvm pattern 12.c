#include<stdio.h>
int main()
{
int sp,st,i;
for(i=1;i<=5;i++)
{
for(sp=1;sp<=5-i;sp++)
{
printf(" ");
}
for(st=1;st<=i;st++)
{
printf("* ");
}
printf("\n");
}
for(i=5;i>=1;i--)
{
for(sp=1;sp<=5-i;sp++)
{
printf(" ");
}
for(st=1;st<=i;st++)
{
printf("* ");
}
printf("\n");
}
}

