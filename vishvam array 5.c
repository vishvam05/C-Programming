#include<stdio.h>
int main()
{
int i,n,arr[50];
scanf("%d",&n);
printf("enter the value of array :\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("%d,",arr[i]);
}
getch();
}
