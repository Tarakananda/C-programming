#include <stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int *ptr=&arr[0];
    printf("%u\n", ptr);

    ptr++;

    printf("%u\n",ptr);
    printf("%u\n", *ptr);
    printf("%u\n", &arr[0]);
    printf("%u\n", &arr[1]);
    printf("%u\n", &arr[2]);
    printf("%u\n", &arr[3]);
    printf("%u\n", &arr[4]);
    printf("%u\n", ptr);
    ++*ptr;
    printf("%u\n", ptr);
    printf("%u\n", *ptr);
    printf("%u\n", ptr);
    *++ptr;
    printf("%u\n", ptr);
    printf("%u\n", *ptr);
    printf("%u\n", ptr);
    *ptr++;
    printf("%u\n", ptr);
    printf("%u\n", *ptr);
}
/*
3739707680
3739707684
2
3739707680
3739707684
3739707688
3739707692
3739707696
3739707684
3739707684
3
3739707684
3739707688
3
3739707688
3739707692
4
*/
