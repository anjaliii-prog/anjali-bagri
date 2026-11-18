#include <stdio.h>
int main()
{
    enum role {ADMIN,USER,GUEST};
    enum role r;
    int n;
    scanf("%d",&n);
    r=n;
    switch(r)
    {
        case ADMIN:
            printf("Welcome Admin");
            break;
        case USER:
            printf("Welcome User");
            break;
        case GUEST:
            printf("Welcome Guest");
            break;
        default:
            printf("Invalid role");
    }
    return 0;
}
