#include <stdio.h>
int main()
{

    int i, j, a, n;
    scanf("%d", &n);
    int number[n];
    int sum = 0;
    int max=0;
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {

        for (j = i + 1; j < n; ++j)
        {

            if (number[i] > number[j])
            {

                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    for (i = 0; i < n-1; ++i)
    {
        sum+=number[i];
    }
    printf("%d  ",sum);
    for (i = 1; i < n ; ++i)
    {
        max += number[i];
    }
    printf("%d", max);
}