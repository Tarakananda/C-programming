#include <stdio.h>

int main(void)
{
    unsigned int num;

    printf("Please enter an integer: ");
    if (scanf("%u", &num) == 1)
    {
        int count = 0;
        while (num > 0)
        {
            count += num & 1;
            num >>= 1;
        }
        printf("%d\n", count);
    }
    else
    {
        printf("Warning: this is not a valid integer\n");
    }
    return 0;
}