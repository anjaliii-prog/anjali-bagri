#include <stdio.h>
int main()
{
    char str[100];
    int i,j,found=0;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                printf("%c",str[i]);
                found=1;
                break;
            }
        }
        if(found==1)
            break;
    }
    if(found==0)
        printf("-1");
    return 0;
}
