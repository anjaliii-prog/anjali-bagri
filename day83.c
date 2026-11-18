#include <stdio.h>
int main()
{
    enum month {JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
    int m;
    scanf("%d",&m);
    switch(m)
    {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30");
            break;
        case FEB:
            printf("28");
            break;
        default:
            printf("Invalid month");
    }
    return 0;
}
