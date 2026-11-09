#include <stdio.h>
int main()
{
    char a[100],b[100];
    int count[26]={0},i,flag=1;
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++)
        count[a[i]-'a']++;
    for(i=0;b[i]!='\0';i++)
        count[b[i]-'a']--;
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Anagrams");
    else
        printf("Not anagrams");
    return 0;
}
