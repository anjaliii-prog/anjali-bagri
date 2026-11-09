#include <stdio.h>
int main()
{
    int a[100],ans[100],n,i,left=1,right=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        ans[i]=left;
        left=left*a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        ans[i]=ans[i]*right;
        right=right*a[i];
    }
    printf("[");
    for(i=0;i<n;i++)
    {
        printf("%d",ans[i]);
        if(i<n-1)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}
