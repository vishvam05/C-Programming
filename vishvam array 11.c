#include<stdio.h>
int main()
{
int i,arr1[50],arr2[50],arr3[50],n;
scanf("%d",&n);
printf("enter the array 1 values\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter the array 2 values\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr2[i]);
}
printf("addition of two array is :\n",arr3[i]);
for(i=0;i<n;i++)
{
arr3[i]=(arr1[i]+arr2[i]);
printf("%d ",arr3[i]);
}
}
