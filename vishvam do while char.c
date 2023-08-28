#include<stdio.h>
char main()
{
char ch;
printf("enter the values\n");
scanf("%c",&ch);
do
{
printf("%c\n",ch);
ch++;
}
while(ch<='z');
}
