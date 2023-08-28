#include<stdio.h>
int main()
{
    FILE*fp;
    int id;
    char name[200];
    float salary;
    fp=fopen("filehandling5.txt","w");
    if(fp==NULL)
    {
        printf("error opening file");
        return 0;
    }
    printf("enter the id: ");
    scanf("%d",&id);
    fprintf(fp,"Id=%d\n",id);
    printf("enter the name: ");
    scanf("%s",&name);
    fprintf(fp,"Name=%s\n",name);
    printf("enter the salary: ");
    scanf("%f",&salary);
    fprintf(fp,"Salary=%f",salary);
    fclose(fp);
}
