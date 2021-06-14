//working of incriment 

#include <stdio.h>
int main()                                              //post incriment
{
    int a=10,b=5,c=0;
    a= ++a + ++a;
    printf("%d\n",a);
    return 0;

}