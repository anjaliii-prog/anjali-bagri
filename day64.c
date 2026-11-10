#include <stdio.h>
int main()
{
    char s[100];
    int i,j,k,len,max=0,repeat;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i;s[j]!='\0';j++)
        {
            repeat=0;
            for(k=i;k<j;k++)
            {
                if(s[k]==s[j])
                {
                    repeat=1;
                    break;
                }
            }
            if(repeat==1)
                break;
            len=j-i+1;
            if(len>max)
                max=len;
        }
    }
    printf("%d",max);
    return 0;
}
