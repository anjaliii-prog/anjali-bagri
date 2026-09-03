#include <stdio.h>
int main()
{
int  month,days ;

printf("Enter the month number 1to 12 : ");
if(scanf("%d",&month)!=1)
{printf("invalid input! please enter a number between 1 to 12");
return 1;
}
switch(month)
{
case 1:
printf("January , 31 days ");
break;

case 2:
printf("Febuary , 28 days");
break;

case 3:
printf("March , 31 days");
break;

case 4:
printf("April , 30 days");
break;

case 5:
printf("May , 31days");
break;

case 6:
printf("June , 30 days");
break;

case 7:
printf("July , 31days");
break;

case 8:
printf("August , 31 days");
break;

case 9:
printf("September , 30days");
break;

case 10:
printf("October , 31days");
break;

case 11:
printf("November , 30days");
break;

case 12:
printf("December ,  31days");
break;
default:printf("invalid moth number");
}

return 0;
}
