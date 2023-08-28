#include<stdio.h>
int main()
{
int ve,i,sp;
for(i=1;i<=5;i++)
{
for(sp=1;sp<=5-i;sp++)
{
printf(" ");
}
for(ve=1;ve<=i;ve++)
{
printf("%d ",ve);
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
printf("%d ",ve);
}
printf("\n");
}
getch();
return 0;
}
