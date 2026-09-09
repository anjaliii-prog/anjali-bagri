#include <stdio.h>

int main()
{
    int n, binary = 0, remainder, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        remainder = n % 2;
        binary = binary + remainder * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary = %d", binary);

    return 0;
}
