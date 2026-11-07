#include <stdio.h>
int main()
{
int i,n;
printf("Enter number of element in array :");
scanf("%d",&n);

int arr[n];
for(i=0;i<=n-1;i++){
scanf("%d",&arr[i]);
}
int max=arr[0],min=arr[0];
for(i=0;i<=n-1;i++){
if(max<arr[i]){
max=arr[i];
}
}
printf("%d",max);
for(i=0;i<=n-1;i++){
if(min>arr[i]){
min=arr[i];
}
}
printf("%d",min);

return 0;
}

