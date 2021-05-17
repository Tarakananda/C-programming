#include <stdio.h>
int main()
{
    int r,c;
    int e=1;
    scanf("%d",&r);
    for (c = r; c > 0; c--)
    {
        e = e * c;
    }
    printf("%d\n",e);
}