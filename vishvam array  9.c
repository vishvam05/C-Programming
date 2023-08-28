#include<stdio.h>
int main()
{
int i,arr[5]={80,40,90,50,55},greatest;
for(i=0;i<=4;i++)
{
if(arr[i]>greatest)
{
greatest=arr[i];
}
}
printf("greatest element is %d",greatest);
getch();
}
