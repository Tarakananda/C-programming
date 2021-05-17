#include <stdio.h>
#include <math.h>
int main()
{
int i,n;
scanf("%d",&n);
{
    int x = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                x++;

            else // Otherwise count both
                x = x + 2;
        }
    }
    return 0;
}
}