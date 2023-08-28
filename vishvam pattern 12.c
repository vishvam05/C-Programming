#include<stdio.h>
int main()
{
int i,ve,sp;
for(i=1;i<=5;i++)
{
for(sp=1;sp<=5-i;sp++)
{
printf(" ");
}
for(ve=1;ve<=i;ve++)
{
printf("%d ",i);
}
printf("\n");
}
for(i=5;i>=1;i--)
{
for(sp=1;sp<=5-i;sp++)
{
printf(" ");
}
for(ve=1;ve<=i;ve++)
{
printf("%d ",i);
}
printf("\n");
}
}
