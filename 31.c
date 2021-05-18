#include <stdio.h>
int main()
{
int num, rem, sum = 0, i;
printf("Enter a number\n");
scanf("%d", &num);
for (i = 1; i < num; i++)
{
    rem = num % i;
    if (rem == 0)
    {
        sum = sum + i;
    }
}
if (sum == num)
    printf("%d is a Perfect Number\n",num);
else
    printf("%d is not a Perfect Number\n",num);
}
