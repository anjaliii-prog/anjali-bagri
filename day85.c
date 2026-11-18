#include <stdio.h>
int main()
{
    enum number {A=10,B,C,D,E};
    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);
    printf("%d\n",D);
    printf("%d",E);
    return 0;
}
