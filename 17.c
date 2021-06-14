#include <stdio.h>                      //pallindrome number
int main()
{
    int n;
    int sum=0;
    int i;
    int r;
    scanf("%d",&n);
    i=n;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
        printf("%d\n",sum);
    }
    if (i==sum)
    {
        printf("palindrome number\n");
    }
    else
    {
        printf("not a palindrome number\n");
    }
}