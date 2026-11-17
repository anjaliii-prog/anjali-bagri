#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[50],str[100];
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("Error: File does not exist!");
    }
    else
    {
        printf("File opened successfully.\n");
        while(fgets(str,100,fp)!=NULL)
        {
            printf("%s",str);
        }
        fclose(fp);
    }
    return 0;
}
