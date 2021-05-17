#include <stdio.h>
float summation(float a, float b)
{
return a+b+1.0;
}
int main()
{
    float a1;
    float b1;
    scanf("%f%f",&a1,&b1);
    float sum = summation(a1,b1);
    printf("%f\n",sum);
}
