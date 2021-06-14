#include <stdio.h>
struct Emp
{
    int emno;
    char name[20];
    float salary;
};
int main()
{
    struct Emp a;
    printf("Side of the structure :%ld\n",sizeof(a));
    printf("Side of the structure :%ld\n", sizeof(struct Emp));
}
