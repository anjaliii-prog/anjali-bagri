#include <stdio.h> 
int main()
{
int a,b,c ;

printf("Enter the sides of  triangle ");
scanf("%d %d %d",&a,&b,&c);

if( a==b &&  b==c ){
printf("It is a equilateral traingle ");
}
else if ( a==b || b==c || c==a )
{
printf("It is a isosceles traingle ");
}
else{
printf("It is a scalene triangle ");
}

return 0;
}
