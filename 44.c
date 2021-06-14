#include <stdio.h>
int main()
{
    long long int n;
    long long int p;
    scanf("%lld %lld", &n, &p);
    if (p!=1 && n!=p)
    {
        if (n%2==0)
        {
            if (n / 2 > p)
            {
                if (p % 2 == 0)
                {
                    printf("%lld", p / 2);
                }
                else if (p % 2 != 0)
                {
                    printf("%lld", (p - 1) / 2);
                }
            }
            else if (n / 2 < p)
            {
                if ((n - p) % 2 == 0)
                {
                    printf("%lld", (n - p) / 2);
                }
                else
                {
                    printf("%lld", (n - p + 1) / 2);
                }
            }
            else
            {
                printf("%lld", (n - p - 1) / 2);
            }
        }
        else
        {
            if (n / 2 > p)
            {
                if (p % 2 == 0)
                {
                    printf("%lld", (p + 1) / 2);
                }
                else if (p % 2 != 0)
                {
                    printf("%lld", (p - 1) / 2);
                }
            }
            else if (n / 2 < p)
            {
                if ((n - p) % 2 == 0)
                {
                    printf("%lld", (n - p + 1) / 2);
                }
                else
                {
                    printf("%lld", (n - p - 1) / 2);
                }
            }
            else
            {
                if ((n-p)%2==0)
                {
                    printf("%lld",(n-p-1)/2);
                }
            }
        }
    }
    else
    {
        printf("0");
    }
    
}