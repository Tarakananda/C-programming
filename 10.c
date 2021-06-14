#include <stdio.h>                              //patterns concept
int main()
{
    int i, j, g=1;
    for (i = 1; i <= 9; i++)
    {
        for (j =1; j<=i; j++)
        {
            printf("%d", g);
            ++g;
        }
        
        printf("\n");
    }
}