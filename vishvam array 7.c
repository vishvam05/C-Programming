#include<stdio.h>
int main()
{
int arr[50],i,n;
scanf("%d",&n);
printf("enter the array values :\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(i==3)
    {
        continue;
    }
printf("%d,",arr[i]);
}
}
