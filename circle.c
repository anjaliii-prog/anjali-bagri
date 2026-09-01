#include <stdio.h>

int main()
{
float r ,a ,c; 

printf("Enter radius of circle: " );
scanf("%f", &r);

a = 3.14*r*r;
printf("Area of circle = %f ", a );

c =2*3.14*r; 
printf("Circumference of circle =%2f" , c );

return 0;
}
