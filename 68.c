#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], i, d, c = 0;
    for (i = 0; i < n); 
    scanf("%d", &a[i++]);
    qsort(a, n, sizeof(int), cmpfunc);
    d = a[n - 1];
    for (i = n - 2; i >= 0; i--)
        if (a[i] == d)
            c++;
    printf("%d\n", c + 1);
    return 0;
}