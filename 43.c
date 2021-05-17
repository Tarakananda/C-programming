#include <stdio.h>
void func(int n)
{
    printf("%d\n",n);
    if (n<1)
    {
        return;
    }
    func(n-1);
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    func(n);
}