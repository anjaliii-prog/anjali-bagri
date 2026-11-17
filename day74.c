#include <stdio.h>
int main()
{
    FILE *source,*destination;
    char s[50],d[50],ch;
    scanf("%s",s);
    scanf("%s",d);
    source=fopen(s,"r");
    destination=fopen(d,"w");
    if(source==NULL)
    {
        printf("Source file not found");
        return 0;
    }
    while((ch=fgetc(source))!=EOF)
    {
        fputc(ch,destination);
    }
    fclose(source);
    fclose(destination);
    printf("File copied successfully");
    return 0;
}
