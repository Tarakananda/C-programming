#include <stdio.h>

void main()
{
    int arr1[100], arr2[100], arr3[200];
    int n, m, l;
    int i, j, k;
    printf("1st array\n");
    scanf("%d", &n);
    printf("Input arrays in array 1:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("2nd array\n");
    scanf("%d", &m);

    printf("Input arrays in array 2:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    l = n + m;
    for (i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }
    for (j = 0; j < m; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    for (i = 0; i < l; i++)
    {
        for (k = 0; k < l - 1; k++)
        {

            if (arr3[k] <= arr3[k + 1])
            {
                j = arr3[k + 1];
                arr3[k + 1] = arr3[k];
                arr3[k] = j;
            }
        }
    }
    printf("\nThe merged array in decending order is:\n");
    for (i = 0; i < l; i++)
    {
        printf("%d\n", arr3[i]);
    }
}