#include <stdio.h>
int main()
{
    char str[200];
    int i=0;
    fgets(str,200,stdin);
    if(str[0]>='a' && str[0]<='z')
        str[0]=str[0]-32;
    while(str[i]!='\0')
    {
        if(str[i]==' ' && str[i+1]>='a' && str[i+1]<='z')
            str[i+1]=str[i+1]-32;
        i++;
    }
    printf("%s",str);
    return 0;
}
