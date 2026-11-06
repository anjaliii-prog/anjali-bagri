#include <stdio.h>
int main()
{
int i,n;
float sum=0;	
printf("Enter number of terms:");
scanf("%d",&n);
for(int i=2;i<=n;i=i+2){
for(int j=3;j<=n;j=j+4){
sum=sum+(float)i/j;
}
}
printf("Sum of series=.2%f",sum);
return 0;
}
