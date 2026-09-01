#include <stdio.h>

int main()
{
int l, b , area , perimeter; 

printf("Enter first number :");
scanf("%d", &l);

printf("Enter second number :");
scanf("%d", &b);

area = l*b;
printf("Area of rectangle = %d\n",area );

perimeter = 2*(l +b);
printf("Perimeter of rectangle = %d\n",perimeter); 

return 0;
}
