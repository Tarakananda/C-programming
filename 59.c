#include <stdio.h>
int *ns()
    {
        int a=2;
       int *d=&a;
       return d;
    }
int main() {
    // Write C code here
    int *b;
    b=ns();
    printf("%d",*b);
    
    return 0;
}