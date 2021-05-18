#include <stdio.h>
int main()
{
    int a, b, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", a, b, gcd);

    return 0;
}