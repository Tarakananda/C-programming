#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Enter another number\n");
    scanf("%d", &m);
    printf("lcm is\n %d", (n * m) / gcd(n, m));
}
int gcd(int a, int b)
{ //logic for finding gcd
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}