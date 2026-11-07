#include <stdio.h>
int main()
{
int i,arr[5],sum=0;

printf("Enter the element of array");

for(i=0;i<=4;i++){
scanf("%d",&arr[i]);
}

for(i=0;i<=4;i++){
sum=sum+arr[i];
}

printf("Sum of array:%d",sum);

return 0;
}
