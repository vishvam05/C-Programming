#include<stdio.h>
int main()
{
int i;
printf("enter the digit-");
scanf("%d",&i);
do
{
if(i==2)
{
i++;
continue;
}
printf("%d\n",i);
i++;
}
while(i<=20);
getch();
}
