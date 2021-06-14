#include <stdio.h>                          //area of circle useing recursion
double areaofcircle(int r)
{
    return 3.14*r*r;
}
int main()
{
int a;
scanf("%d",&a);
printf("area of circle %lf\n",areaofcircle(a));
}