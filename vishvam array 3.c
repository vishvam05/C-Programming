#include<stdio.h>
int main()
{
int i,arr[5];
printf("enter the array values :\n");
for(i=0;i<=4;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<=4;i++)
{
if(i==3)
{
    break;
    }
printf("%d ",arr[i]);
}
}
