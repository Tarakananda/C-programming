//write a program explaining the implicit type function

#include <stdio.h>
int main()
{
    int i1=20,i2=30;
    float f1=5.6,f2=6.2;
    i1=20;                                   /*implicit type conversion in which the compiler atomatically converts int into float*/
    printf("%d\n",i1);
    f1=i2+f2;
    printf("%f\n",f1);
    return 0;
}