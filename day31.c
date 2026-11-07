#include <stdio.h>
int main ()
{
int n,found=0,a;
printf("Enter number of element in array :");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the number you want to search");
scanf("%d",&a);

for(int i=0;i<n;i++){
if(arr[i]==a){
printf("Element found in index %d",i);
found=1;
break;
}
}
if(found==0){
printf("Element not found");
}
return 0;
}
