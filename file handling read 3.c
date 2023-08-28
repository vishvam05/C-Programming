#include<stdio.h>
int main()
{
    FILE*fp;
    char text[300];
    fp=fopen("filehandling2.txt","r");
    printf("%s",fgets(text,300,fp));
    fclose(fp);
    getch();
}
