#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("filehandling2.txt","w");
    if(fp==NULL)
    {
        printf("error opening file");
        return 1;
    }
    fputs("this is file handling program part 2\n",fp);
    fclose(fp);
    getch();
    return 0;
}
