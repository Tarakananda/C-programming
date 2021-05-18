#include <stdio.h>
int main()
{
    int result=0;
    int remainder;
    int num;
    int original;
    scanf("%d",&num);
    original=num;
    while(original>0)
    {
        remainder=original%10;
        result=result+remainder*remainder*remainder;
        original=original/10;
    }
    if (result==num)
        printf("%d is an amstrong num\n",num);
    else
        printf("%d not an amtrong num\n",num);
}