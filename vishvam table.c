#include<stdio.h>
int main()
{
int i,table;
printf("enter the table:\n");
scanf("%d",&table);
for(i=1;i<=10;i++)
{
printf("%d*%d=%d\n",table,i,table*i);
}
}
