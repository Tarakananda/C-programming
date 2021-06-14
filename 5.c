//AND gate example and a comma seperated in for loop

#include <stdio.h>
int main()
{
    int a=10;
    int b;
    for (a=3,b=4;a>=0 && b<=6;a--,b++)
    {
        printf("a=%d b=%d\n",a,b);
    }
    return 0;
}