#include <stdio.h>
int main()
{
    int x = 0, y = 0;
    unsigned int rows = 0;
    scanf("%u", &rows);
    for (x = 1; x <= rows; ++x)
    {
        for (y = x; y < rows; ++y)
        {
            printf(" ");
        }
        for (y = 1; y <= x; ++y)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}