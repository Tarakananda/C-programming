// #include <stdio.h>
// #include <math.h>

// void towerOfHanoi(int n, char from, char to, char aux1, char aux2)
// {
//     if (n == 1)
//     {
//         printf("Move disk 1 from rod %c to rod %c\n", from, to);
//         return;
//     }
//     towerOfHanoi(n - 2, from, aux1, aux2, to);
//     printf("Move disk %d from rod %c to rod %c\n", n - 1, from, aux2);
//     printf("move disk %d from rod %c to rod %c\n", n, from, to);
//     printf("Move disk %d from rod %c to rod %c\n", n - 1, aux2, to);
//     towerOfHanoi(n - 2, aux1, to, from, aux2);
// }
// int main()
// {
//     int num, i;
//     printf("Enter the number of disks : ");
//     scanf("%d", &num);
//     towerOfHanoi(num, 'A', 'D', 'B', 'C');
//     return 0;
// }



// pyramid of a function

// #include<stdio.h> 
// #include<math.h>  

// int main(){  
// int i, space,rows,k=0,count=0,count1=0;
//     printf("Enter number of rows: ");
//     scanf("%d",&rows);
//     for(i=1;i<=rows;++i)
//     {
//         for(space=1; space<=rows-i; ++space)
//         {
//             printf("  ");
//             ++count;
//         }
//         while(k!=2*i-1)
//         {
//             if (count<=rows-1)
//             {
//                 printf("%d ", i+k);
//                 ++count;
//             }
//             else
//             {
//                 ++count1;
//                 printf("%d ",(i+k-2*count1));
//             }
//             ++k;
//         }
//         count1=count=k=0;
//         printf("\n");
//     }
//     return 0;

// }



//TOWER OF HANOI
// #include <stdio.h>
// #include <math.h>

// //Recursive function to solve tower of hanoi problem
// void towerOfHanoi(int n, char fromRod, char toRod, char auxRod)
// {
//     if (n == 1)
//     {
//         printf("Move disk 1 from rod %c to rod %c\n", fromRod, toRod);
//         return;
//     }
//     towerOfHanoi(n - 1, fromRod, auxRod, toRod);
//     printf("Move disk %d from rod %c to rod %c\n", n, fromRod, toRod);
//     towerOfHanoi(n - 1, auxRod, toRod, fromRod);
// }
// int main()
// {
//     int num, i;
//     printf("Enter the number of disks : ");
//     scanf("%d", &num);
//     towerOfHanoi(num, 'A', 'C', 'B'); // A, B and C are names of rods
//     return 0;
// }
//

// A program to print prime numbers till the given numbers.
// (Sieve Algorithm).
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n, i, j;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     int prime[n + 1];
//     for (i = 0; i <= n; i++)
//         prime[i] = 1;

//     for (i = 2; i * i <= n; i++)
//         if (prime[i] == 1)
//             for (j = i * i; j <= n; j = j + i)
//                 prime[j] = 0;
//     printf("Prime numbers till %d : \n", n);
//     // Print all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             printf("%d ", p);
//     return 0;
// }







//A program which takes two dates as an input, print the number of days between
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <string>
//     struct Date //struct type declaration  
// { 
//         int d, m, y; 
// }; 
// const int monthDays[12] = {31, 28, 31, 30, 31, 30, 
//                                                 31, 31, 30, 31, 30, 31}; //array declaration with month values on each index 
// int countLeapYears(struct Date d) //leap year check
// { 
//         int years = d.y; 
//         if (d.m <= 2) 
//                 years--; 
//         return years / 4 - years / 100 + years / 400; 
// } 
// int getDifference(struct Date dt1, struct Date dt2) 
// {       int i;//difference in days calculation
//         long int n1 = dt1.y*365 + dt1.d; 
//         for (i=0; i< dt1.m - 1; i++) 
//                 n1 += monthDays[i]; 
//         n1 += countLeapYears(dt1); 
//         long int n2 = dt2.y*365 + dt2.d; 
//         for (i=0; i< dt2.m - 1; i++) 
//                 n2 += monthDays[i]; 
//         n2 += countLeapYears(dt2); 
//         return (n2 - n1); 
// } 

// int main() //entry point of the c program
// { 
//         int day1,day2,month1,month2,year1,year2;
//         printf("Enter the 1st date detail \n");
//         printf("enter date(DD):\n");
//         scanf("%d",&day1);
//         printf("enter month(MM):\n");
//         scanf("%d",&month1);
//         printf("enter year(yyyy):\n");
//         scanf("%d",&year1);
        
//         printf("Enter the 2nd date detail \n");
//         printf("enter date(DD):\n");
//         scanf("%d",&day2);
//         printf("enter month(MM):\n");
//         scanf("%d",&month2);
//         printf("enter year(yyyy):\n");
//         scanf("%d",&year2);

//         struct Date dt1 = {day1, month1, year1}; 
//         struct Date dt2 = {day2,month2, year2}; 

//         printf("Difference between two dates is  %d ",getDifference(dt1, dt2)); //function call to calculate days between dates

//         return 0; 
// }





//A Program which takes a two dates as input, print the number of minutes between
// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// struct Date 
// {
//     int d, m, y;
// };
// const int monthDays[12] = {31, 28, 31, 30, 31, 30,
//                            31, 31, 30, 31, 30, 31}; //array declaration with month values on each index
// int countLeapYears(struct Date d)                   //leap year check
// {
//     int years = d.y;
//     if (d.m <= 2)
//         years--;
//     return years / 4 - years / 100 + years / 400;
// }
// int getDifference(struct Date dt1, struct Date dt2)
// {
//     int i; //difference in days calculation
//     long int n1 = dt1.y * 365 + dt1.d;
//     for (i = 0; i < dt1.m - 1; i++)
//         n1 += monthDays[i];
//     n1 += countLeapYears(dt1);
//     long int n2 = dt2.y * 365 + dt2.d;
//     for (i = 0; i < dt2.m - 1; i++)
//         n2 += monthDays[i];
//     n2 += countLeapYears(dt2);
//     return (n2 - n1);
// }

// int main() //entry point of the c program
// {
//     int day1, day2, month1, month2, year1, year2;
//     printf("Enter the 1st date detail \n");
//     printf("enter date(DD):\n");
//     scanf("%d", &day1);
//     printf("enter month(MM):\n");
//     scanf("%d", &month1);
//     printf("enter year(yyyy):\n");
//     scanf("%d", &year1);

//     printf("Enter the 2nd date detail \n");
//     printf("enter date(DD):\n");
//     scanf("%d", &day2);
//     printf("enter month(MM):\n");
//     scanf("%d", &month2);
//     printf("enter year(yyyy):\n");
//     scanf("%d", &year2);

//     struct Date dt1 = {day1, month1, year1};
//     struct Date dt2 = {day2, month2, year2};

//     printf("Minutes between two dates  %d ", getDifference(dt1, dt2) * 24 * 60); //function call to calculate days between minutes

//     return 0;
// }

/**
The program which takes date as an input and prints the current week of the year*/
// #include "stdio.h"
// #include "string.h"
// #include "time.h"
// #include "math.h"
// int main(void) 
// {
//     struct tm tm;     //The C library function struct tm *localtime(const time_t *timer) uses the time pointed by timer to fill a tm structure with the values that represent the corresponding local time. The value of timer is broken up into the structure tm and expressed in the local time zone.
//     char timebuf[64]; //character array declaration
//     memset(&tm, 0, sizeof tm);
//     int day, month, year;
//     printf("enter date(DD):\n");
//     scanf("%d", &day);
//     printf("enter month(MM):(00 for jan and 11 for dec)\n");
//     scanf("%d", &month);
//     printf("enter year(yyyy):\n");
//     scanf("%d", &year);
//     tm.tm_sec = 0;
//     tm.tm_min = 0;
//     tm.tm_hour = 23;
//     tm.tm_mday = day;
//     tm.tm_mon = month;
//     tm.tm_year = year;
//     tm.tm_isdst = -1;
//     mktime(&tm); //The C library function time_t mktime(struct tm *timeptr) converts the structure pointed to by timeptr into a time_t value according to the local time zone.

//     if (strftime(timebuf, sizeof timebuf, "%W", &tm) != 0)
//     { //The C library function size_t strftime(char *str, size_t maxsize, const char *format, const struct tm *timeptr) formats the time represented in the structure timeptr according to the formatting rules defined in format and stored into str.
//         int temp;
//         scanf(timebuf, "%d", &temp); //The C library function int scanf(const char *str, const char *format, ...) reads formatted input from a string.
//         printf("Week number is: %d\n", temp + 1);
//     }
//     return 0;
// }

























/**
A program which takes a year, and print all the calendar days */
// #include "stdio.h"
// #define TRUE 1
// #define FALSE 0
// //In the C Programming Language, the #define directive allows the definition of macros with in your source code. These macro definitions allow constant values to be declared to use throughout your code.

// int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// //array declaration(type int) and initialisation with the number of days starting from 0 index
// char *months[] =
//     {
//         " ",
//         "\n\n\nJanuary",
//         "\n\n\nFebruary",
//         "\n\n\nMarch",
//         "\n\n\nApril",
//         "\n\n\nMay",
//         "\n\n\nJune",
//         "\n\n\nJuly",
//         "\n\n\nAugust",
//         "\n\n\nSeptember",
//         "\n\n\nOctober",
//         "\n\n\nNovember",
//         "\n\n\nDecember"};

// //character array declaration and initialisation with the month name starting from 0 index
// int inputyear(void)
// {
//     int year;

//     printf("Please enter a year (example: 2018) : ");
//     scanf("%d", &year);
//     return year;
// }

// int determinedaycode(int year) //code for getting day number that is 1st january of given input year will be on which day
// {
//     int daycode;
//     int d1, d2, d3;
//     //formula for getting daycode
//     d1 = (year - 1.) / 4.0;
//     d2 = (year - 1.) / 100.;
//     d3 = (year - 1.) / 400.;
//     daycode = (year + d1 - d2 + d3) % 7;
//     printf("daycode %d \n", daycode);
//     return daycode;
// }

// int determineleapyear(int year) //code for leap year check
// {
//     if ((year % 4 == FALSE && year % 100 != FALSE) || year % 400 == FALSE)
//     {
//         days_in_month[2] = 29;
//         return TRUE;
//     }
//     else
//     {
//         days_in_month[2] = 28;
//         return FALSE;
//     }
// }

// void calendar(int year, int daycode)
// {                                         //below is the code for printing the calendar month wise.
//     int month, day;                       //declaration of the varaible of type int
//     for (month = 1; month <= 12; month++) //loop from 1st month  to 12 month
//     {
//         printf("%s", months[month]);
//         printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");

//         for (day = 1; day <= 1 + daycode * 5; day++)
//         {
//             printf(" ");
//         }

//         for (day = 1; day <= days_in_month[month]; day++)
//         {
//             printf("%2d", day);

//             if ((day + daycode) % 7 > 0)
//                 printf("   ");
//             else
//                 printf("\n ");
//         }

//         daycode = (daycode + days_in_month[month]) % 7;
//     }
// }

// int main(void) //entry point of the c program
// {
//     int year, daycode, leapyear; //declaration of the variable of type int

//     year = inputyear();               //function call and returned value will be stored in the variable year
//     daycode = determinedaycode(year); //function call and returned value will be stored in the variable daycode
//     determineleapyear(year);          //function call with year value as input parameter
//     calendar(year, daycode);          //function call with year value and daycode value as input parameter
//     printf("\n");                     //line break by \n
// }
