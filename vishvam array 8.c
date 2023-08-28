#include<stdio.h>
int main()
{
int arr[5]={43,54,53,13,78},i;
printf("values after continue fn\n");
for(i=0;i<5;i++)
{
    if(i==3)
{
continue;
}
printf("%d\n",arr[i]);
}
}
