#include <stdio.h>
int main()
{
int n,positive=0,negitive=0,zero=0;
printf("Enter number of elements in a array");
scanf("%d",&n);

int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){
if(arr[i]>0){
positive++;
}
else if(arr[i]<0){
negitive ++;
}
else{
zero ++;
}
}
printf("No of positive number :%d",positive);
printf("No of negitive number :%d",negitive);
printf("No of zero's :%d",zero);
return 0;
}
