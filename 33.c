#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b)
{
    return a+b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum;
    sum = solveMeFirst(a, b);
    printf("%d", sum);
}