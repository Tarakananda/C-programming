#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h> 
int main()
{
    //The program takes an array to calculate mean, median, mode and range int n; //int type declaration of the variable
    // printf("enter how many numbers you want to enter \n");
    // scanf("%d", &n);
    // int arr[n], i, j, sum; //int type declaration of the variable
    // float mean;            //float type declaration of the variable
    // int freq[n];           //int type declaration of the variable
    // for (i = 1; i <= n; i++)
    //     freq[i] = 0;
    // sum = 0;
    // //counting the frequency of each number
    // for (i = 1; i <= n; i++)
    // {
    //     scanf("%d", &arr[i]);
    //     sum = sum + arr[i];
    //     freq[arr[i]]++;
    // }
    // //bubble sort algorithm for sorting data in ascending order
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= n; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int t;
    //             t = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = t;
    //         }
    //     }
    // }
    // mean = (1.0) * sum / n; //formula for mean calculation

    // float median;
    // printf("mean is : %f \n", mean);
    // //logic for finding median
    // if (n % 2 == 0)
    // {
    //     median = (1.0) * (arr[n / 2] + arr[n / 2 - 1]) / 2;
    // }
    // else
    // {
    //     median = arr[n / 2];
    // }
    // printf("median is  %f \n", median);

    // int maxf = -1;
    // //logic for finding the mode
    // for (i = 1; i <= n; i++)
    // {
    //     if (freq[i] > maxf)
    //     {
    //         maxf = freq[i];
    //     }
    // }
    // printf("mode is/are :\n");
    // //logic for finding the range
    // for (i = 1; i <= n; i++)
    // {
    //     if (freq[i] == maxf)
    //         printf("%d ", i);
    // }

    // printf("\nRange is %d ", arr[n] - arr[1]);

    
    
    
    
    
    
    
    
    //The program takes an array of student names, print them alphabetically
    // int i = 0, e, j, d, k, space = 0; //int type declaration of the variables
    // char a[10000], b[1000][20];       //character array declaration

    // printf("Read names(space separated):\n");
    // scanf("%[^\n]s", a); //logic for taking space separated input
    //     //logic for counting spaces in input sentences
    // for (i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ' ')
    //         space++;
    // }
    // i = 0;
    // //logic for storing wording in 2d array b
    // for (j = 0; j < (space + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ' ')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }

    // int l, m;
    // char temp[1000];
    // //logic for sorting names in ascending order using selection sort
    // for (l = 0; l <= j; l++)
    //     for (m = l + 1; m <= j; m++)
    //     {
    //         if (strcmp(b[l], b[m]) > 0)
    //         {
    //             strcpy(temp, b[l]);
    //             strcpy(b[l], b[m]);
    //             strcpy(b[m], temp);
    //         }
    //     }
    // printf("sorted names in ascending order are:\n");
    // for (e = 0; e <= j; e++)
    // {

    //     printf("%s ", b[e]);
    // }




    //The program takes a string as an input, and print the text wrapped
    // int i = 0, len, j;          //int type declaration of the variables
    // char a[10000], b[1000][20]; //character array declaration
    // char *p;
    // printf("Read a string:\n");
    // scanf("%[^\n]s", a); //logic for taking space separated input
    //                      //logic for counting spaces in input sentences
    // printf("Enter the wrap length: ");
    // scanf("%d", &len);
    // while (i < strlen(a))
    // {
    //     for (j = i; j < i + len; j++)
    //     {
    //         printf("%c", a[j]);
    //     }
    //     printf("\n");
    //     i += len;
    // }

    //The program takes a string as an input, and print the unique characters and count
    // int i = 0, e, j, d, k;   //int type declaration of the variables
    // char a[10000], c[10000]; //character array declaration

    // printf("Read a string with space separated:\n");
    // scanf("%[^\n]s", a); //logic for taking space separated input

    // c[i] = a[i];
    // //logic for counting unique charaters and storing them in character array c
    // for (e = 0; a[e] != '\0'; e++)
    // {
    //     for (d = 0; d <= i; d++)
    //     {
    //         if (c[d] == a[e])
    //             break;
    //         else if (d == i)
    //         {
    //             i++;
    //             c[i] = a[e];
    //             break;
    //         }
    //     }
    // }
    // printf("\nunique characters are:\n");
    // for (e = 0; e <= i; e++)
    //     printf("%c  ", c[e]);
    // printf("\n total number of unique characters  %d \n", i);

    
    
    
    //A program takes a string as an input, and print unique words
    // int i = 0, e, j, d, k, space = 0;        //int type declaration of the variables
    // char a[10000], b[1000][20], c[1000][20]; //character array declaration

    // printf("enter the words space separated:\n");
    // scanf("%[^\n]s", a); //logic for taking space separeted input
    //     //logic for counting spaces in input sentences
    // for (i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ' ')
    //         space++;
    // }
    // i = 0;
    // //logic for storing wording in 2d array b
    // for (j = 0; j < (space + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ' ')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }
    // i = 0;
    // //logic for storing unique words in character array c
    // strcpy(c[i], b[i]);
    // for (e = 1; e <= j; e++)
    // {
    //     for (d = 0; d <= i; d++)
    //     {
    //         if (strcmp(c[d], b[e]) == 0)
    //             break;
    //         else if (d == i)
    //         {
    //             i++;
    //             strcpy(c[i], b[e]);
    //             break;
    //         }
    //     }
    // }
    // printf("\nunique words are:");
    // for (e = 0; e < i; e++)
    //     printf("%s\n", c[e]);







    //A program takes a string and number of char as an input and print the substring
    // char str[1000]; //character array declaration
    // int n, i;       //int type declaration of the variables
    // printf("Enter string\n");
    // scanf("%s", str);
    // printf("enter number of character to be printed\n");
    // scanf("%d", &n);
    // //logic for finding substring
    // for (i = 0; i < n; i++)
    //     printf("%c", str[i]);

    
    
    
    
    
    
    
    
    //A program takes a string as an input,and tokenize the string based on delimiter
    // int i = 0, e, j, d, k, delim = 0; //int type declaration of the variables
    // char a[10000], b[1000][20], ch;   //character array declaration
    // printf("enter delimiter \n");
    // scanf("%c", &ch);

    // printf("Read a string:\n");
    // scanf("%s", a);

    // //logic for delimiter spaces in input sentences
    // for (i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ch)
    //         delim++;
    // }
    // i = 0;
    // //logic for storing wording in 2d array b
    // for (j = 0; j < (delim + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ch)
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }
    // printf("\nwords after tokenize are:");
    // //below for loop for printing the delimiter separated words
    // for (e = 0; e < j; e++)
    //     printf("%s\n", b[e]);

    
    
    
    
    
    
    
    //A program takes a string as an input, and print all the adverbs int i = 0, e, j, d, k, space = 0; //int type declaration of the varaibles
    // char a[10000], b[1000][20];       //character type declaration of the array

    // printf("Read a string spaces separated:\n");
    // scanf("%[^\n]s", a);           //input form the user (allowing space separated )
    // for (i = 0; a[i] != '\0'; i++) //counting spaces int the sentences    '\0' is null character
    // {
    //     if (a[i] == ' ')
    //         space++;
    // }
    // i = 0;
    // //for loop for getting words in 2d character array b on every indexes
    // for (j = 0; j < (space + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ' ')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }
    // printf("adverbs are:\n");
    // //logic for finding adverbs from the given inputs
    // for (e = 0; e <= j; e++)
    // {
    //     char temp[50];
    //     int len = strlen(b[e]);
    //     if ((b[e][len - 2] == 'l' || b[e][len - 2] == 'L') && (b[e][len - 1] == 'y' || b[e][len - 1] == 'Y'))
    //         printf("%s ", b[e]);
    // }

    
    
    
    
    
    //A program takes an array of words as an input and print words in ascending order
    // int i = 0, e, j, d, k, space = 0; //int type declaration of the variables
    // char a[10000], b[1000][20];       //character array declaration

    // printf("Read a sentence:\n");
    // scanf("%[^\n]s", a); //logic for taking space separated input
    //     //logic for counting spaces in input sentences
    // for (i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ' ')
    //         space++;
    // }
    // i = 0;
    // //logic for storing wording in 2d array b
    // for (j = 0; j < (space + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ' ')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }

    // int l, m;
    // char temp[1000];
    // //logic for sorting words in ascending order using selection sort
    // for (l = 0; l <= j; l++)
    //     for (m = l + 1; m <= j; m++)
    //     {
    //         if (strcmp(b[l], b[m]) > 0)
    //         {
    //             strcpy(temp, b[l]);
    //             strcpy(b[l], b[m]);
    //             strcpy(b[m], temp);
    //         }
    //     }
    // printf("sorted words in ascending order are:\n");
    // for (e = 0; e <= j; e++)
    // {

    //     printf("%s ", b[e]);
    // }

    
    
    
    
    
    
    
    //A program takes an array of words as an input and print words in descending order

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //A program takes an array of words, print words in ascending order of their length
    // int i = 0, e, j, d, k, space = 0; //int type declaration of the variables
    // char a[10000], b[1000][20];       //caracter array declaration

    // printf("Read a sentence:\n");
    // scanf("%[^\n]s", a); //logic for taking space separated input
    //     //logic for counting spaces in input sentences
    // for (i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ' ')
    //         space++;
    // }
    // i = 0;
    // //logic for storing wording in 2d array b
    // for (j = 0; j < (space + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ' ')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }

    // int l, m;
    // char temp[1000]; //logic for sorting words in lengthwise ascending order are:
    // for (l = 0; l <= j; l++)
    //     for (m = l + 1; m <= j; m++)
    //     {
    //         if ((strlen(b[l]) > strlen(b[m])))
    //         {
    //             strcpy(temp, b[l]);
    //             strcpy(b[l], b[m]);
    //             strcpy(b[m], temp);
    //         }
    //     }
    // printf("sorted words in lengthwise ascending order are:\n");
    // for (e = 0; e <= j; e++)
    // {

    //     printf("%s ", b[e]);
    // }

    
    
    
    
    
    
    
    
    
    //A program takes an array of word print words in descending order of their length
    // int i = 0, e, j, d, k, space = 0; //int type declaration of the variables
    // char a[10000], b[1000][20];       //character array declaration

    // printf("Read a sentence:\n");
    // scanf("%[^\n]s", a); //logic for taking space separated input
    //     //logic for counting spaces in input sentences
    // for (i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ' ')
    //         space++;
    // }
    // i = 0;
    // //logic for storing wording in 2d array b
    // for (j = 0; j < (space + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ' ')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }

    // int l, m;
    // char temp[1000];
    // //logic for sorting words in lengthwise descending order using selection sort
    // for (l = 0; l <= j; l++)
    //     for (m = l + 1; m <= j; m++)
    //     {
    //         if ((strlen(b[l]) < strlen(b[m])))
    //         {
    //             strcpy(temp, b[l]);
    //             strcpy(b[l], b[m]);
    //             strcpy(b[m], temp);
    //         }
    //     }
    // printf("sorted words in lengthwise descending order are:\n");
    // for (e = 0; e <= j; e++)
    // {

    //     printf("%s ", b[e]);
    // }





    //A program takes a word and string as an input and looks for a regex match
    // int i = 0, e, j, d, k, space = 0;       //int type declartion
    // char a[10000], b[1000][20], find[1000]; //character array declaration

    // printf("Read a sentence:\n");
    // scanf("%[^\n]s", a); //logic for space separated input
    // printf("enter word to be searched in sentence:\n");
    // scanf("%s", find);
    // //logic for counting spaces in sentences
    // for (i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ' ')
    //         space++;
    // }
    // i = 0;
    // //logic for storing words in character array b on each indexes
    // for (j = 0; j < (space + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ' ')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }
    // int c = 0;
    // //logic for regex match
    // for (e = 0; e <= j; e++)
    // {
    //     if (strcmp(find, b[e]) == 0)
    //     {
    //         printf("match found\n");
    //         break;
    //     }
    //     c++;
    // }

    // if (c == j + 1)
    //     printf("no match \n");





    // A program takes a word and string as an input and looks for a search match
    // int i = 0, e, j, d, k, space = 0;       //int type declaration of the variables
    // char a[10000], b[1000][20], find[1000]; //caracter array declaration

    // printf("Read a sentence:\n");
    // scanf("%[^\n]s", a); //logic for taking space separated input
    // printf("enter word to be searched in sentence:\n");
    // scanf("%s", find);
    // //logic for counting spaces in input sentences
    // for (i = 0; a[i] != '\0'; i++)
    // {
    //     if (a[i] == ' ')
    //         space++;
    // }
    // i = 0;
    // //logic for storing wording in 2d array b
    // for (j = 0; j < (space + 1); i++, j++)
    // {
    //     k = 0;
    //     while (a[i] != '\0')
    //     {
    //         if (a[i] == ' ')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             b[j][k++] = a[i];
    //             i++;
    //         }
    //     }
    //     b[j][k] = '\0';
    // }
    // int c = 0;
    // //logic for search match
    // for (e = 0; e <= j; e++)
    // {
    //     if (strcmp(find, b[e]) == 0)
    //     {
    //         printf("match found\n");
    //         break;
    //     }
    //     c++;
    // }

    // if (c == j + 1)
    //     printf("no match \n");







    // A function which takes seconds as an input, and convert into the minutes float seconds; //variable declaration of type float
    // printf("Enter the time in seconds :\n ");
    // scanf("%f", &seconds);
    // printf("Time in minutes : %f", seconds / 60);

   
   
   
   
    // A function which takes a year, and prints whether it is a leap year or not int year; // variable declaration of type of int
    // printf("Enter a year: \n");
    // scanf("%d", &year);

    // //logic for leap year finding
    // if (year % 4 == 0)
    // {
    //     if (year % 100 == 0)
    //     {
    //         if (year % 400 == 0)
    //             printf("%d is a leap year.", year);
    //         else
    //             printf("%d is not  a leap year.", year);
    //     }
    //     else
    //         printf("%d is a leap year.", year);
    // }
    // else
    //     printf("%d is not a leap year.", year);

    // return 0;






    
}