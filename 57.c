#include <stdio.h>
int main()
{
    int a=30;
    void *p;
    p=&a;
    float g=12.8;
    p=&g;

    printf ("%d %f\n",a,g);
}