#include<stdio.h>
int main()
{
    int num[20],i,j,n,temp;
    printf("enter the elments in the array \n");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("numbers as per assending order :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
        }
}
