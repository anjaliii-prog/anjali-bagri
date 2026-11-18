#include <stdio.h>
int main()
{
    enum status {SUCCESS,FAILURE,TIMEOUT};
    enum status s;
    int n;
    scanf("%d",&n);
    s=n;
    switch(s)
    {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}
