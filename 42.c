#include <stdio.h>
int main()
{
    int var;
    fun();
    fun();
    fun();
    fun();
    fun();
    fun();
    return 0;
}
void fun()
{
    static int staticvar=10;
    int overwrite=10;
    overwrite++;
    staticvar++;
    printf("staticvar %d\n",staticvar);
    printf("overwrite %d\n",overwrite);
}