#include<stdio.h>
int main()
{
int space,variable,i,scan;
scanf("%d",&scan);
for(i=1;i<=scan;i++)
{
for(space=1;space<=scan-i;space++)
{
printf("%d",i);
}
for(variable=1;variable<=i;variable++)
printf("\n");
}
for(i=scan;i>=1;i--)
{
for(space=1;space<=scan-i;space++)
{
    printf(" ");
}
printf("\n");
}
}
