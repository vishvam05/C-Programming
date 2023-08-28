#include<stdio.h>
#include<conio.h>
int main()
{
int i;
printf("enter the digit-");
scanf("%d",&i);
while(i<=20)
{
if(i==6)
{
i++;
continue;
}
printf("%d\n",i);
i++;
}
getch();
}
