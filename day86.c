#include <stdio.h>
int main()
{
    enum choice {ADD=1,SUBTRACT,MULTIPLY};
    int a,b,ch;
    scanf("%d%d",&a,&b);
    scanf("%d",&ch);
    switch(ch)
    {
        case ADD:
            printf("%d",a+b);
            break;
        case SUBTRACT:
            printf("%d",a-b);
            break;
        case MULTIPLY:
            printf("%d",a*b);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
