#include <stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int age;
    fp=fopen("info.txt","w");
    scanf("%s",name);
    scanf("%d",&age);
    fprintf(fp,"Name: %s\n",name);
    fprintf(fp,"Age: %d\n",age);
    fclose(fp);
    printf("Data saved successfully");
    return 0;
}
