#include <stdio.h>
void fun(int* a, int* b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a=20;
    int b=10;
    fun(&a,&b);
    printf("%d %d\n",a,b);
}