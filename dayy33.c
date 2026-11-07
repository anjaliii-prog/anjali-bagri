#include <stdio.h>
int main()
{
    int a[100],n,i,x,pos;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element: ");
    scanf("%d",&x);
    pos=0;
    while(pos<n && a[pos]<x)
        pos++;
    for(i=n;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=x;
    n++;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
