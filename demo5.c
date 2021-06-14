// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     char n,m,o;
//     printf("Enter three integer values :\n");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("Enter three character values\n");
//     scanf("%c %c %c",&n,&m,&o,&o);
//     printf("The three integer values are :%d %d %d\nAnd the three character values are%c %c %c\n",a,b,c,n,m,o);
// }


// #include <stdio.h>
// int main()
// {
//     float a,b,c;
//     printf("Enter 3 float values\n");
//     scanf("%f %f %f",&a,&b,&c);
//     printf("%f %f %f",b,b,b);
// }

// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     float n=10.2,m=11.6;
//     printf("Enter three integer values\n");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("%d %d %d %f %f",a,b,c,n,m);
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a value\n");
//     scanf("%d",&a);
//     a=--a;
//     printf("%d\n",a);
//     a=++a;
//     printf("%d\n",++a);
// }


// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter two values\n");
//     scanf("%d %d",&a,&b);
//     int sum=a+b;
//     int diff=a-b;
//     int mul=a*b;
//     int div=a/b;
//     printf("%d %d\n",sum,mul);
// }


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[20];
//     printf("Enter your name\n");
//     gets(name);
//     printf("Your name is %s",name);
//     unsigned int len =strlen(name);
//     printf("Length of '%s' is %d",name,len);
// }


// #include <stdio.h>
// int main()
// {
//     char a[20];
//     printf("Enter your name\n");
//     scanf("%s",a);
//     while(a[0]>='a'&&a[0]<='z')
//     {
//         a[0]=a[0]-32;
//     }
//     printf("%s",a);
// }

// #include <stdio.h>
// int main()
// {
//     char a[20];
//     printf("Enter your name\n");
//     scanf("%s", a);
//     while (a[0] >= 'A' && a[0] <= 'Z')
//     {
//         a[0] = a[0] + 32;
//     }
//     printf("%s", a);
// }



// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[20];
//     char b[20];
//     int i;
//     printf("Enter first name\n");
//     scanf("%s",a);
//     printf("Enter second name\n");
//     scanf("%s",b);
//     unsigned int l1=strlen(a);
//     unsigned int l2=strlen(b);
//     for(i=0;i<=l2;i++)
//     {
//         a[l1+i]=b[i];
//     }
//     printf("The concatinate value is :%s",a);
// }

// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int no;
//     char studentname[10];
//     int marks[3];
// };
// int main()
// {
//     int i, j;
//     int n;
//     printf("Enter the number of perople\n");
//     scanf("%d", &n);
//     struct student a[n];
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter roll num of student :\n");
//         scanf("%d", &a[i].no);
//         printf("Enter student name :\n");
//         scanf("%s", a[i].studentname);
//         for (j = 0; j < 3; j++)
//         {
//             printf("Enter marks\n");
//             scanf("%d", &a[i].marks[j]);
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("Roll number :%d\nname :%s\n", a[i].no, a[i].studentname);
//         for (j = 0; j < n; j++)
//         {
//             printf("marks :%d\n", a[i].marks[j]);
//         }
//     }
// }

// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int rollno;
//     char name[10];
// };
// int main()
// {
//     int i;
//     struct student st[5];
//     printf("Enter Records of 5 students");
//     for (i = 0; i < 5; i++)
//     {
//         printf("\nEnter Rollno:");
//         scanf("%d", &st[i].rollno);
//         printf("\nEnter Name:");
//         scanf("%s", &st[i].name);
//     }
//     printf("\nStudent Information List:");
//     for (i = 0; i < 5; i++)
//     {
//         printf("\nRollno:%d, Name:%s", st[i].rollno, st[i].name);
//     }
//     return 0;
// }


//POINTER CONCEPT COMPILER ERROR
// #include <stdio.h>
// int main()
// {
//     int i=200;
//     int *name;
//     name=&i;
//     printf("The value of i is :%d\n",i);
//     printf("The value of i address is :%u\n", &i);
//     printf("The value of i address using pointer is :%u\n", name);
//     printf("The value of address of pointer is :%u\n", &name);
//     printf("The value of value of i through pointing is :%d\n", *name);
// }





// #include <stdio.h>
// #include <time.h>
// int main()
// {
//     time_t t;
//     time(&t);
//     printf("%s",ctime(&t));
//     return 0;
// }

// #include <stdio.h>
// int *ns()
// {
//     int a = 2;
//     return &a;
// }
// int main()
// {
//     int *d;
//     d = ns();
//     printf("%d", *d);

//     return 0;
// }


// #include <stdio.h>
// int add(int a,int b)
// {
//     int z=a+b;
//     return z;
// }
// int mul(int a,int b, int c)
// {
//     int z=a*b*c;
//     return z;
// }
// int main()
// {
//     int r1,r2,r3;
//     int (*ptr) (int , int);
//     ptr=&add;
//     r3=ptr(30,50);
//     printf("%d\n",r3);
//     int (*m)(int, int, int);
//     m=&mul;
//     r1=mul(2,3,4);
//     printf("%d\n",r1);
// }

// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year:");
//     scanf("%d", &year);
//     if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
//     {
//         printf("%d is a leap year", year);
//     }
//     else
//         printf("%d is not a leap year", year);
// }

// #include <stdio.h>
// int main()
// {
//     int option;
//     printf("Enter option:");
//     scanf("%d", &option);
//     switch (option)
//     {
//     case -1:
//         printf("Case 1\n");
//         break;
//     case 2:
//         printf("Case 2\n");
//         break;
//     case 3:
//         printf("Case 3\n");
//         break;
//     default:
//         printf("default case\n");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     char character;
//     printf("Enter character: ");
//     scanf("%c", &character);
//     switch (character)
//     {
//     case 'A':
//     case 'a':
//         printf("\n%c is vowel", character);
//         break;
//     case 'E':
//     case 'e':
//         printf("\n%c is vowel", character);
//         break;
//     case 'I':
//     case 'i':
//         printf("\n%c is vowel", character);
//         break;
//     case 'O':
//     case 'o':
//         printf("\n%c is vowel", character);
//         break;
//     case 'U':
//     case 'u':
//         printf("\n%c is vowel", character);
//         break;
//     default:
//         printf("\n%c is consonants", character);
//     }
// }




// #include <stdio.h>
// int main()
// {
//     int k=3;
//     if(!(k)++)
//         printf("\n if");
//     else if(k=((--k&&++k)<<1))
//             if(k>>2)
//         printf("\n else if %d",k);
//     else    
//         printf("\n else k:%d",k);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     // int k=3;
//     // if(!(k)++)
//     //     printf("\n else");
//     // else if (--k)
//     // {
//     //     printf("\n if");
//     // }
//     // else
//     // {
//     //     printf("\n else if");
//     // }
//     // return 0;
//     if (-124)
//     {
//         printf(" if");
//     }
//     else
//         printf("else");
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     // if (!(printf("hello")))
//     //     printf("hi");
//     // else
//     //     printf("else");
//     // return 0;
//     int x=1;
//     if(--x)
//     {
//         printf("%d",main());
//     }
//     printf("main");
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     int x=1;
//     float y=1.0;
//     double d=1;
//     if(x==y)
//     {
//         printf("x==y is true\n");
//     }
//     if (1 == 1.0)
//     {
//         printf("1==1.0 is true\n");
//     }
//     if (1.0 == 1.0f)
//     {
//         printf("1.0==1.0f is true\n");
//     }
//     if (d == 1.0f)
//     {
//         printf("d==1.0f is true\n");
//     }
// }







//Dynamic memory allocation using malloc function
// #include <stdio.h>
// #include <stdlib.h>
// void main()
// {
//     struct Emp
//     {
//         int eno;
//         char name[20];
//         float esal;
//     };
//     struct Emp* ptr;
//     ptr=(struct Emp*)malloc(sizeof(struct Emp));
//     if (ptr==NULL)
//     {
//         printf("Memory is not allocatrd\n");
//     }
//     else
//     {
//         printf("Enter the details\n");
//         scanf("%d %s %f",&ptr->eno,ptr->name,&ptr->esal);
//     }
//     printf("%d\n%s\n%f\n",ptr->eno,ptr->name,ptr->esal);
// }




// #include <stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n,*arr;
//     printf("Enter a value\n");
//     scanf("%d",&n);
//     arr =(int*)calloc(n,sizeof(int));                           //int* is the type of arr used, n is the size of the array, int is the type of size of array
//     if(arr==NULL)
//     {
//         printf("No memory to allocate\n");
//     }
//     else{
//         printf("Array elements are\n");
//         for(int i=0;i<n;i++)
//         {
//             printf("%d\n",*(arr+i));
//         }
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, *stack;
//     printf("Enter a value\n");
//     scanf("%d", &n);
//     stack = (int *)calloc(n, sizeof(int)); //int* is the type of arr used, n is the size of the array, int is the type of size of array
//     n++;
//     stack=(int*)realloc(stack,n*sizeof(int));
//     if (stack == NULL)
//     {
//         printf("No memory to allocate\n");
//     }
//     else
//     {
//         printf("Array elements are\n");
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d\n", *(stack + i));
//         }
//     }
// }



// MEMORY ALLOCATION THROUGH COMMAND LINE AURGUMENTS
// #include <stdio.h>
// int main(int argc,char* aurgv[])
// {
//     int i;
//     if (argc == 1)
//     {
//         printf("Nothing is there to display\n");
//     }
//     else
//     {
//         printf("The values u entered are\n");
//         for(i=1;i<argc;i++)
//         {
//             printf("%s\n",aurgv[i]);
//         }
//     }
// }




// #include <stdio.h>
// int den3;
// int gcd(int a, int b)
// { //logic for finding gcd
//     if (a == 0)
//         return b;
//     return gcd(b % a, a);
// }
// //function for finding least common denominator
// void LCD(int den1, int den2)
// {
//     den3 = gcd(den1, den2); //fucntion call for gcd
// }

// int main() //entry point of the c program
// {
//     int n1, d1, n2, d2; //int type declaration of the variable
//     printf("for first fraction\n");
//     printf("enter numerator\n");
//     scanf("%d", &n1);
//     printf("enter denominator\n");
//     scanf("%d", &d1);
//     printf("for second fraction\n");
//     printf("enter numerator\n");
//     scanf("%d", &n2);
//     printf("enter denominator\n");
//     scanf("%d", &d2);
//     LCD(d1, d2); //function call for lcd with two arguments
//     printf("LCD of fractions %d/%d and %d/%d is\n", n1, d1, n2, d2);
//     printf("%d", (d1 * d2) / den3);
// }

// The program takes a string, and print whether a string is alphabet or alphanumeric

// #include <stdio.h>
// #include <ctype.h>
//                                 int
//                                 main()
// {
//     char a[1000];
//     printf("enter string\n");
//     scanf("%s", a);
//     int i = 0, c = 0;
//     while (isalpha(a[i]) && i <= strlen(a))
//     {
//         c++;
//         i++;
//     }
//     if (c == strlen(a))
//     {
//         printf("\nEntered string is alphabetic");
//         c = 0;
//     }
//     else
//     {
//         while (isalnum(a[i]) && i <= strlen(a))
//         {
//             c++;
//             i++;
//         }
//         if (c == strlen(a))
//             printf("\nEntered string is  alphanumeric");
//         else
//             printf("not from both\n");
//     }
// }

//The program takes an array of characters, print the characters in ascending order
// #include "stdio.h"
// int main()
// {
//     int n, i, j;
//     printf("Enter how many characters you want to enter : ");
//     scanf("%d", &n);
//     char arr[n + 2];
//     printf("Enter the characters : \n");
//     for (i = 0; i < n; i++)
//     {
//         char temp;
//         scanf("%s", &temp);
//         arr[i] = temp;
//     }
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 char t;
//                 t = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = t;
//             }
//         }
//     }
//     for (i = 0; i < n; i++)
//         printf("%c ", arr[i]);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int n,i,k;
//     printf("Enter the value of n\n");
//     scanf("%d",&n);
//     typedef int Array[n];
//     Array x;
//     printf("Enter the values in array\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&x[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         k=i+1;
//         printf("%d)%d\n",k,x[i]);
//     }
// }



//atoi method example
// #include <stdio.h>
// #include<stdlib.h>
// struct demo5
// {
//     int employnum;
//     char *employname;
//     int employsalary;
// };
// int main(int store, char *string[])
// {
//     struct demo5 e;
//     e.employnum = atoi(string[1]);
//     e.employname = string[2];
//     e.employsalary = atoi(string[3]);
//     printf("%d\n", e.employnum);
//     printf("%s\n", e.employname);
//     printf("%d\n", e.employsalary);
// }



// #include <graphic.h>
// #include <conico.h>
// int main()
// {
//     int n=DETECT ,i;
//     initgraph(&n, &i, "C:\MinGW\lib");
//     bar(100,100,200,400);
//     circle(400,250,50);
//     getch();
//     closegraph();
//     return 0;
// }



// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     while (kbhit()==0)
//     {
//         printf("Press any key to stop this loop\n");
//     }
// }



// #include <stdio.h>
// int main()
// {   
//     int i;
//     char str[]="ABC";
//     for (i=0;i<3;i++)
//         printf("%c %c %c %c\n",str[i],*(str+i),*(i+str),i[str]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     // int n=5;
//     // printf("%d\n",scanf("%d",&n));
//     // return 0;
//     // char test =65;
//     // printf("%c",test);
//     // return 0;
// }




#include <stdio.h>
int main()
{
    // static int var =4;
    // printf("%d",var --);
    // if(var)
    // main();

    // int temp1[]={1,2,3,4};
    // int temp2[]={5,6,7,8};
    // printf("%d %d",*temp1,*temp2);
    // char *c;
    // int *p;
    // float *z;
    // long long int *y;
    // printf("%d%d%d%d",sizeof(c),sizeof(p),sizeof(z),sizeof(y));

    // printf("%d"4<<2);
    // return 0;
    // char *a="MPASSOCATES";
    // char *b=a;
    // printf("%c %c",0[a],b[0]);
    // int arr[6]={1};
    // int i;
    // for(i=0;i<6;i++)
    // {
    //     printf("%d",arr[i]);
    // }
    // int k;
    // if (k)
    // {
    //     printf("mp");
    // }
    // else
    // {
    //     printf("mpassocates");

    // }
    // printf("company");
    // char *a;
    // printf("%d %d",sizeof(*a),sizeof(a));

    // char str1[]="TARUN";
    // char str2[]={'T','A','R','U','N'};
    // int a =sizeof(str1)/sizeof(str1[0]);
    // int b = sizeof(str2) / sizeof(str2[0]);
    // printf("%d %d",a,b);


    // int a=10,b=20,c=30;
    // printf("%d\n",sizeof(c/=a+b));
    // printf("%d",c);
    // return 0;
    // printf("ASSOCIATES");
    // main();
    // return 0;

    // int n=55555;
    // printf("%d",printf("%d",printf("%d",printf("%d",n))));
    // return 0;

    // char str1[] = "ASSOCIATES";
    // char str2[] = "ASSOCIATES";
    // if (str1==str2)
    // {
    //     printf("Both are equal\n");
    // }
    // else 
    //     printf("Both are not equal\n");


    int x=(5,5,6);
    printf("%d",x);
    return 0;
}