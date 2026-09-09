#include <stdio.h>

int main()
{
    int n, temp, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if(reverse == n)
    {
        printf("%d is a Palindrome", n);
    }
    else
    {
        printf("%d is not a Palindrome", n);
    }

    return 0;
}
