#include <stdio.h>
int main()
{
    int a[100],n,i,total=0,left=0;
    int ans=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        total=total+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(left==total-left-a[i])
        {
            ans=i;
            break;
        }
        left=left+a[i];
    }
    printf("%d",ans);
    return 0;
}
