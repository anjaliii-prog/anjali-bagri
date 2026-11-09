#include <stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,len1=0,len2=0,flag=0;
    scanf("%s%s",a,b);
    while(a[len1]!='\0')
        len1++;
    while(b[len2]!='\0')
        len2++;
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            flag=1;
            for(j=0;j<len1;j++)
            {
                if(a[(i+j)%len1]!=b[j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                break;
        }
    }
    if(flag==1)
        printf("Rotation");
    else
        printf("Not rotation");
    return 0;
}
