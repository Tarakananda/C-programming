#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long resposta[1048576], aux[1048576];

int total(int *a, int N)
{
    int i, multiplic, total = 0;
    for (i = 0, multiplic = 1; i < N; i++, multiplic *= 4)
    {
        total += multiplic * a[i];
    }
    return total;
}

int main()
{
    int N, i, j, a[10], b[4], c[10], x, r = 0, w = 0, aux1[1048576];
    long long y;

    memset(resposta, -1, sizeof(resposta));

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", a + i);
        a[i]--;
    }

    aux[w] = 0;

    aux1[w++] = total(a, N);

    while (r < w)
    {
        y = aux[r];
        x = aux1[r++];
        memset(a, 0, sizeof(a));
        memset(b, -1, sizeof(b));
        resposta[x] = y;

        for (i = 0; x; i++, x /= 4)
        {
            a[i] = x % 4;
        }
        memcpy(c, a, sizeof(a));
        for (i = 0; i < N; i++)
        {
            if (b[a[i]] == -1)
            {
                b[a[i]] = i;
            }
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (b[i] != -1 && (b[j] == -1 || b[i] < b[j]))
                {
                    memcpy(a, c, sizeof(a));
                    a[b[i]] = j;
                    x = total(a, N);
                    if (resposta[x] == -1)
                    {
                        aux[w] = y + 1;
                        aux1[w++] = x;
                        resposta[x] = 0;
                    }
                }
            }
        }
    }
    printf("%lld", resposta[0]);
    return 0;
}