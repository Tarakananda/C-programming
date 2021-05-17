#include <stdio.h>
int main()
{
    int i,j;
    for (i=0; i<=10; ++i)
    {
        printf("                i is outer loop %d\n",i);
        for (j=0; j<=10; j++)
        {
            /* code */printf("j is inner loop %d\n",j);
        }
        
    }
}