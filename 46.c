#include <stdio.h>
void func(int n)
{
    if (n<1)
    {
        return;
    }
    func(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    func(n);
}