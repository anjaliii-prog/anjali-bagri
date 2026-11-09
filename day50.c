#include <stdio.h>
int main()
{
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    printf("%02d-",d);
    if(m==1) printf("Jan");
    else if(m==2) printf("Feb");
    else if(m==3) printf("Mar");
    else if(m==4) printf("Apr");
    else if(m==5) printf("May");
    else if(m==6) printf("Jun");
    else if(m==7) printf("Jul");
    else if(m==8) printf("Aug");
    else if(m==9) printf("Sep");
    else if(m==10) printf("Oct");
    else if(m==11) printf("Nov");
    else if(m==12) printf("Dec");
    printf("-%d",y);
    return 0;
}
