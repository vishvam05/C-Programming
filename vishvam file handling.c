#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("filehandling1.txt","w");
    fprintf(fp,"this is file handling 1 program\n");
    fclose(fp);
}
