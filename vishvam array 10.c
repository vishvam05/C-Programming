#include<stdio.h>
int main()
{
int i,n,greatest,arr[50];
scanf("%d",&n);
printf("enter the array values :\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(arr[i]>greatest)
{
greatest=arr[i];
}
}
printf("greatest value is:%d",greatest);
getch();
}
