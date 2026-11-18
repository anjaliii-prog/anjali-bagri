#include <stdio.h>
int main()
{
    enum light {RED,YELLOW,GREEN};
    enum light signal;
    int n;
    scanf("%d",&n);
    signal=n;
    switch(signal)
    {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}
