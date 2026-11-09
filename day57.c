#include <stdio.h>
int main()
{
    int a[100],n,i,j,prev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        prev=-1;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>a[i])
            {
                prev=a[j];
                break;
            }
        }
        printf("%d",prev);
        if(i<n-1)
        {
            printf(", ");
        }
    }
    return 0;
}
