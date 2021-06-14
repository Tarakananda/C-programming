#include <stdio.h>
#include <dos.h>
int main(int aurgc,char* aurg v[])
{
    if (aurgc>2)
    {
        char s1=aurg[1];
        char s2=aurg[2];
        int x=atoi(s1);
        int y=atoi(s2);
        printf("%d\n"x+y);
    }
    else    
        printf("Enter sufficient values\n");
}