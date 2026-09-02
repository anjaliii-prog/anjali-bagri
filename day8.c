#include <stdio.h>
int main()
{
int a, b ,c ; 

printf("Enter three number : "); 
scanf("%d %d %d" , &a ,&b ,&c); 

if ( a>=b && a>=c ){
printf( " First number is the largest ");
}
else if ( b>=a && b>=c){
printf("Second number is the largest ");
}
else{ 
printf(" Third number is the largest ");
}

return 0;
}
