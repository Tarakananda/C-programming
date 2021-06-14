// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     printf("Value of a: %d\n", a);
//     printf("Address of a: %p\n", &a);
// }

// // #include <stdio.h>
// // int main()
// // {
// //     int a = 4, b = 7;
// //     printf("Output:%d\n", a & b);
// //     printf("Output:%d\n", a | b);
// // }

// #include <stdio.h>
// void main()
// {
//     int a=11,b=12,c=13,d;
//     d=(a>b)?(a>c)?a:c:(b>c)?b:c;
//     printf("%d",d);
// }

// #include <stdio.h>
// int main()
// {
//     int p=-13,q;
//     q=q%4+-1;
//     printf("%d\n",q);
// }

// #include <stdio.h>
// int main()
// {
//     int a=0,b=8,c;
//     c=a==(a==b);
//     printf("%d",c);
// }

// #include <stdio.h>
// int main()
// {
//     int a=17,b=3;
//         printf("%d\n",a&b);
//         printf("%d\n", a | b);
//         printf("%d\n", a ^ b);
// }

// #include <stdio.h>
// int main()
// {
//     int x;
//     x=7%3+7/2*3;
//     printf("%d\n",x);
// }

// #include <stdio.h>
// int main()
// {
//     float i=3.12;
//     printf("%ld\n",sizeof(i));
//     printf("%ld\n", sizeof(23.234));
//     printf("%ld\n", sizeof(23.2f));
// }

// #include <stdio.h>
// int main()
// {
//     int a=11,b=12;
//     b=a++ + ++a +a ++;
//     printf("%d %d",a,b);
// }


// #include <stdio.h>
// int main()
// {
//     int a=17,b=3;
//     printf("%d<<%d:%d\n",a,b,a<<b);
//     printf("%d>>%d:%d", a, b, a > b);
// }


// #include <stdio.h>
// int main()
// {
//     int a=11,b;
//     b=!(!a);
//     printf("%d %d",a,b);
// }


// #include <stdio.h>
// int main()
// {
//     int x=(1,2);
//     printf("%d",x);
// }

#include <stdio.h>
#include <string.h>

long long func1[1000], func2[1000];

int total(int *a, int N)
{
    int i, multiplic, total = 0;
    for (i = 0, multiplic = 1; i < N; i++, multiplic *= 4)
    {
        total += multiplic * a[i];
    }
    return total;
}

int main()
{
    int N, i, j, a[10], b[4], c[10], x, r = 0, w = 0, func3[1048576];
    long long y;

    memset(func1, -1, sizeof(func1));

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", a + i);
        a[i]--;
    }

    func2[w] = 0;

    func3[w++] = total(a, N);

    while (r < w)
    {
        y = func2[r];
        x = func3[r++];
        memset(a, 0, sizeof(a));
        memset(b, -1, sizeof(b));
        func1[x] = y;

        for (i = 0; x; i++, x /= 4)
        {
            a[i] = x % 4;
        }
        memcpy(c, a, sizeof(a));
        for (i = 0; i < N; i++)
        {
            if (b[a[i]] == -1)
            {
                b[a[i]] = i;
            }
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
            {
                if (b[i] != -1 && (b[j] == -1 || b[i] < b[j]))
                {
                    memcpy(a, c, sizeof(a));
                    a[b[i]] = j;
                    x = total(a, N);
                    if (func1[x] == -1)
                    {
                        func2[w] = y + 1;
                        func3[w++] = x;
                        func1[x] = 0;
                    }
                }
            }
        }
    }
    printf("%lld\n", func1[0]);
    return 0;
}