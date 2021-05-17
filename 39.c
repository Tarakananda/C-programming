#include <stdio.h>
int main()
{
    int n, a[100], b[100], i, j, c = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
}