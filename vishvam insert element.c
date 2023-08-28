#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20],i,element,n;
    printf("enter the no of elements:\n");
    scanf("%d",&n);
    printf("enter the elements digit:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter element to insert:");
    scanf("%d",&element);
    arr[i]=element;
    printf("\nThe new array is :\n");
    for(i=0;i<n+1;i++)
        printf("%d ",arr[i]);
    return 0;
}
