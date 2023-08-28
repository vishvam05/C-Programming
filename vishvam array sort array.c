#include<stdio.h>
int main()
{
int arr[5]={5,6,3,8,9};
int temp=0;
//int length=sizeof(arr)/sizeof(arr[0]);
printf("elements of orignal array:\n");
for(int i=0;i<5;i++)
{
    printf("%d",arr[i]);
}
for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++)
    {
        if (arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("\n");
printf("elements in assending order is:\n");
for(int i=0;i<5;i++)
{
    printf("%d",arr[i]);
}
return 0;
}
