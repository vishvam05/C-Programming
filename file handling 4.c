#include<stdio.h>
int main()
{
    char ch[100],ch2[100];
    printf("enter the first name:");
    scanf("%s",&ch);
    printf("enter the second name:");
    scanf("%s",&ch2);
    strcat(ch,ch2);
    FILE*fp;
    fp=fopen("filehandling4.txt","w");
    fprintf(fp,"%s",ch);
    fclose(fp);
}
