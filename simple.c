#include <stdio.h>
#include <math.h>
int main()
{
float p,r,t,simple_intrest,compound_intrest , a;

printf(" Enter  the principal value  : ");
scanf("%f" ,&p );

printf(" Enter the rate : "); 
scanf( "%f" , &r );

printf("Enter the time taken: "); 
scanf( "%f", &t );

simple_intrest = ( p*r*t)/100;

printf(" Simple intrest : %2f \n ", simple_intrest) ;
 
a= p*pow((1+ r /100),t);
compound_intrest = a-p;
printf("Compound intrest  = %.2f\n" , compound_intrest ) ; 
return 0;
}
