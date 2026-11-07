#include <stdio.h>
int main()
{
int n,odd=0,even=0;
printf("Enter number of elements : ");
scanf("%d",&n);

int arr[n];
for(int i=0;i<=n-1;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<=n-1;i++){
if(i%2==0){
even++;
}
else{
odd++;
}
}
printf("Number of odd element:%d",odd);
printf("Number of even element:%d",even);

return 0;
}
