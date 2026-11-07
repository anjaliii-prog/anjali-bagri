#include <stdio.h>
int main()
{
int a[5];
printf("enter 5 integer");
for(int i=0; i<5; i++)
{
scanf("%d" ,&a[i]);
}
printf("Array elements are :\n");
for(int i=0; i<5; i++)
{
printf("%d ", a[i]);
}
return 0;
}
