#include <stdio.h>
int main()
{
    char str[200],word[100];
    int i=0,start=0,len=0,max=0,k;
    fgets(str,200,stdin);
    while(1)
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\0')
        {
            len=i-start;
            if(len>max)
            {
                max=len;
                for(k=0;k<len;k++)
                    word[k]=str[start+k];
                word[len]='\0';
            }
            start=i+1;
        }
        if(str[i]=='\0')
            break;
        i++;
    }
    printf("%s",word);
    return 0;
}
