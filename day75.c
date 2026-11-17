#include <stdio.h>
int main()
{
    FILE *fp;
    char str[200];
    fp=fopen("info.txt","a");
    if(fp==NULL)
    {
        printf("File not found");
        return 0;
    }
    fgets(str,200,stdin);
    fprintf(fp,"%s",str);
    fclose(fp);
    printf("Text appended successfully");
    return 0;
}
