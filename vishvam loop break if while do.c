#include<stdio.h>
int main()
{
int i;
printf("enter the digit-");
scanf("%d",&i);
do
{
if(i==8)
{
    i++;
break;
}
printf("%d\n",i);
i++;
}
while(i<=20);
getch();
}
