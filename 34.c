#include <stdio.h>                  //if and while loop 
int main()
{
    int w;
    scanf("%d",&w);
    while (w>2)
    {
    if (w%2==0)
    {
        printf("yes");
        break;
    }
    else
    {
        printf("no");
        break;
    }
    }
    while(w<=2)
    {
        printf("No");
        break;
    }
}