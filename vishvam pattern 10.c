#include<stdio.h>
int main()
{
int space,star,i,scan;
scanf("%d",&scan);
for(i=1;i<=scan;i++)
{
for(space=1;space<=scan-i;space++)
{
printf(" ");
}
for(star=1;star<=i;star++)
{
printf("* ");
}
printf("\n");
}
for(i=scan;i>=1;i--)
{
for(space=1;space<=scan-i;space++)
{
printf(" ");
}
for(star=1;star<=i;star++)
{
printf("* ");
}
printf("\n");
}
}
