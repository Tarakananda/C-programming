//functions : block of instructions having identity and is taking the input,processing the input and producing the output....
#include <stdio.h>
#include <limits.h>

// int gcd(int a, int b)
// { //logic for finding gcd
//     if (a == 0 || b == 0)
//         return 0;
//     if (a == b)
//         return a;
//     if (a > b)
//         return gcd(a - b, b);
//     return gcd(a, b - a);
// }
int main()
{
    // int a;
    // float b;
    // char c;
    // double d;
    // long int e;
    // long long int f;
    // printf("%ld\n",sizeof(a));
    // printf("%ld\n", sizeof(b));
    // printf("%ld\n", sizeof(c));
    // printf("%ld\n", sizeof(d));
    // printf("%ld\n", sizeof(e));
    // printf("%ld\n", sizeof(f));
    // printf("%d\n", INT_MIN);
    // printf("%d\n",INT_MIN);
    // printf("%u\n",UINT_MAX);
    // printf("%d\n",SCHAR_MAX);
    // printf("%d\n",SCHAR_MIN);
    // printf("%d\n",CHAR_MAX);
    // printf("%d\n",CHAR_MIN);
    // printf("%u\n",UCHAR_MAX);

    // MODIFY OPERATOR
    // pre - increment, , pre - decriment
    // substitution
    // evaluation
    // assignment
    // post-incriment,,post-decrement


    //CONTROL STATEMENTS: IF,IF-ELSE,ELSE,FOR,WHILE,DO-WHILE etc

    //printing patterns
    // int n,m,i,j,k;
    // printf("Enter the number of rows to print\n");
    // scanf("%d",&n);
    // printf("Enter the number of columns to print\n");
    // scanf("%d",&m);
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for (i=1;i<n;i++)
    // {
    //     for(j=n-1;j>=i;j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(k=n-i+1;k>=1;k--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for (i=1;i<=n;i++)
    // {
    //     for(j=1;j<=40-i;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(k=1;k<=2*i-1;k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    //FACTORIAL OF A NUMBER
    // int n,i,fact=1;
    // printf("Enter the number:\n");
    // scanf("%d",&n);
    // for(i=n;i>=1;i--)
    // {
    //     fact=fact*i;
    // }
    // printf("%d\n",fact);

    //SUM OF ALL THE DIGITS IN A NUMBER
    // int n,r,sum=0;
    // printf("Enter a number:\n");
    // scanf("%d",&n);
    // while (n>0)
    // {
    //     r=n%10;
    //     sum=sum+r;
    //     n=n/10;
    // }
    // printf("%d\n",sum);



    //Number is perfect or not
    // int n,i,sum=0;
    // printf("Enter a number:\n");
    // scanf("%d",&n);
    // for(i=1;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         sum=sum+i;
    //     }
    // }
    // if(sum==n)
    // {
    //     printf("It is a perfect number\n");
    // }
    // else
    // {
    //     printf("It is not a perfect number\n");
    // }

    //PERFECT NUMBER IN A GIVEN RANGE
    
    // long long int n,j;
    // int i,sum;
    // printf("Enter a number:\n");
    // scanf("%lld",&j);
    // for (n=1;n<=j;n++)
    // {
    //     sum = 0;
    //     for (i = 1; i < n; i++)
    //     {

    //         if (n % i == 0)
    //         {
    //             sum = sum + i;
    //         }
    // }
    // if(n==sum)
    // {
    //     printf("%lld\n",n);;
    // }
    // }

    //FIBBINOCI SERIES
    // int n,i,a=0,b=1,c;
    // printf("Enter a number\n");
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //     printf("%d  ",a);
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }
    // printf("\n");


    //PALLENDROME NUMBER
    // int n, i, sum = 0, r;
    // scanf("%d", &n);
    // i = n;
    // while (n > 0)
    // {
    //     r = n % 10;
    //     sum = (sum * 10) + r;
    //     n = n / 10;
    // }
    // if (i == sum)
    // {
    //     printf("num is a pallindrome\n");
    // }
    // else
    // {
    //     printf("num is not a pallindrome\n");
    // }


    //AMSTRONG NUMBER
    // int n, r, sum = 0, temp;
    // scanf("%d", &n);
    // temp = n;
    // while (n > 0)
    // {
    //     r = n % 10;
    //     sum = sum + (r * r * r);
    //     n = n / 10;
    // }
    // if (temp == sum)
    //     printf("armstrong  number\n");
    // else
    //     printf("not armstrong number\n");
    // return 0;

    //REVERSE THE NUMBER
    // int n, i, sum = 0, r;
    // scanf("%d", &n);
    // i = n;
    // while (n > 0)
    // {
    //     r = n % 10;
    //     sum = (sum * 10) + r;
    //     n = n / 10;
    // }
    // printf("%d\n",sum);


    //premitive data types
    // int,float,double,char,long int, long long int;



    //user defined date types
    //structure:it is data type which holds n number of elements with different data type;
    //Eg: struct name
    // {
    //     data type element1;
    //     data type elenent2;
    //     data type element3;
    //     data type element4;
    //     data type element5;
    // }

//Program takes two ratio inputs and find whether they are equivalent
    // #include <stdio.h>
    // int mul1, mul2;
    // void equi(int num1, int den1, int num2, int den2)
    // {
    //     mul1 = num1 * den2;
    //     mul2 = num2 * den2;
    //     if (mul1 % mul2 == 0)
    //         printf("Ratio are equivalent\n");
    //     else
    //         printf("Ratio is not equivalent\n");
    // }
    // int main()
    // {
    //     int n1, d1, n2, d2;
    //     printf("for first ratio\n");
    //     printf("enter numerator\n");
    //     scanf("%d", &n1);
    //     printf("enter denominator\n");
    //     scanf("%d", &d1);
    //     printf("for second ratio\n");
    //     printf("enter numerator\n");
    //     scanf("%d", &n2);
    //     printf("enter denominator\n");
    //     scanf("%d", &d2);
    //     equi(n1, d1, n2, d2);
    // }
    
    
    
    //A program which calculate simple interest 
    // int p, r, t; //int type declaration of the variable
    // float si;    //float type declaration of the variable
    // printf("enter principal amount\n");
    // scanf("%d", &p);
    // printf("enter rate of interest\n");
    // scanf("%d", &r);
    // ;
    // printf("enter time (in year)\n");
    // scanf("%d", &t);
    // si = (p * r * t) / (float)100; //formula for simple interest
    // printf("simple interest\n");
    // printf("%f", si);

    
    
    
    
    // Program to calculate nPr, nCr
    // #include <stdio.h>
    //     int
    //     factorial(int n)
    // {
    //     int fac = 1;
    //     while (n > 0)
    //     {
    //         fac = fac * n;
    //         n = n - 1;
    //     }
    //     return fac;
    // }
    // int main() //entry point of the c program
    // {
    //     int x, n, r, np, nc, k; //int type declaration of the variable
    //     printf("enter n\n");
    //     scanf("%d", &n);
    //     printf("enter r\n");
    //     scanf("%d", &r);
    //     int fn = factorial(n); //function call for finding the factorial
    //     int fr = factorial(r); //function call for finding the factorial
    //     k = n - r;
    //     int fnr = factorial(k); //function call for finding the factorial
    //     np = fn / fnr;          //formula for permutation
    //     printf("number of permutation: %d\n", np);
    //     nc = fn / (fnr * fr); //formula for combination
    //     printf("number of combination : %d\n", nc);
    // }

    // A program to convert decimal number to binary
    // #include <stdio.h>
    //     void
    //     convert(int n)
    // {
    //     int store[1000];
    //     int i = 0, j;
    //     //logic for decimal to binary conversion
    //     while (n > 0)
    //     {
    //         store[i] = n % 2;
    //         n = n / 2;
    //         i++;
    //     }
    //     printf("binary representation is\n");
    //     for (j = i - 1; j >= 0; j--)
    //         printf("%d", store[j]);
    // }
    // int main() //entry point of  the c program
    // {
    //     printf("Enter number\n");
    //     int n;
    //     scanf("%d", &n);
    //     convert(n); //function call with n as argument
    //     return 0;
    // }

    
    
    // The program takes an array to calculate mean, median, mode and
// #include <stdio.h>
// #include <math.h>
//     int main()
//     {
//         int n; //int type declaration of the variable
//         printf("enter how many numbers you want to enter \n");
//         scanf("%d", &n);
//         int arr[n], i, j, sum; //int type declaration of the variable
//         float mean;            //float type declaration of the variable
//         int freq[n];           //int type declaration of the variable
//         for (i = 1; i <= n; i++)
//             freq[i] = 0;
//         sum = 0;
//         //counting the frequency of each number
//         for (i = 1; i <= n; i++)
//         {
//             scanf("%d", &arr[i]);
//             sum = sum + arr[i];
//             freq[arr[i]]++;
//         }
//         //bubble sort algorithm for sorting data in ascending order
//         for (i = 1; i <= n; i++)
//         {
//             for (j = 1; j <= n; j++)
//             {
//                 if (arr[j] > arr[j + 1])
//                 {
//                     int t;
//                     t = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = t;
//                 }
//             }
//         }
//         mean = (1.0) * sum / n; //formula for mean calculation

//         float median;
//         printf("mean is : %f \n", mean);
//         //logic for finding median
//         if (n % 2 == 0)
//         {
//             median = (1.0) * (arr[n / 2] + arr[n / 2 - 1]) / 2;
//         }
//         else
//         {
//             median = arr[n / 2];
//         }
//         printf("median is  %f \n", median);

//         int maxf = -1;
//         //logic for finding the mode
//         for (i = 1; i <= n; i++)
//         {
//             if (freq[i] > maxf)
//             {
//                 maxf = freq[i];
//             }
//         }
//         printf("mode is/are :\n");
//         //logic for finding the range
//         for (i = 1; i <= n; i++)
//         {
//             if (freq[i] == maxf)
//                 printf("%d ", i);
//         }

//         printf("\nRange is %d ", arr[n] - arr[1]);
//     }





        // int a, b; //int type declaration of the variable
        // printf("1st number\n");
        // scanf("%d", &a);
        // printf("2nd number\n");
        // scanf("%d", &b);
        // printf("lcm is\n %d", (a * b) / gcd(a, b)); //formula for finding lcm




}
