#include<stdio.h>
int main()
{
int a,b,o,m;
printf("enter the pattern\n");
scanf("%d%d",&a,&b);
for(o=1;o<=a;o++)
{
for(m=1;m<=b;m++)
{
printf("%d ",o);
}
printf("%d\n");
}
getch();
}
