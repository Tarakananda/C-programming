// import java.lang.*;
// import java.io.*;
// import java.util.Arrays;
// import java.util.Scanner;

// public class DoubtClearing {
//     public static void main(String[] args) {
//         Choice();
//         String[] strings=new String[5];
//         Scanner s = new Scanner(System.in);
//         for (int i=0;i<5;++i)
//         {
//            System.out.println("enter the string");
//            strings[i]=s.nextLine();
//         }
//         while (true) {
//             System.out.println("enter the choice");
//             int choice = s.nextInt();
//             if (choice >= 1 && choice <= 7) {
//                 switch(choice) {
//                     case 1:
//                         System.out.println("the string array is sorted ");
//                         Arrays.sort(strings);
//                         break;
//                     case 2:
//                         System.out.println("the sorted strings from index-to index is");
//                         System.out.println("enter the indices from index-to index to sort");
//                         int i1 = s.nextInt();
//                         int i2 = s.nextInt();
//                         Arrays.sort(strings, i1 + 1, i2 + 1);
//                         System.out.println("the string array is sorted from index "+i1+" to "+ i2);
//                         break;
//                     case 3:
//                         System.out.println("follows binary search");
//                         System.out.println("enter the the element you want to find");
//                         String str = s.nextLine();
//                         int i3 = Arrays.binarySearch(strings, str);
//                         System.out.println("the element is found at "+(i3+1)+" position");
//                         System.out.println("you will get index of the element if the element presents ");
//                         System.out.println("otherwise you will get the -(insertion index+1) if the element is not present");
//                         break;
//                     case 4:
//                         System.out.println("you opted for equality checking");
//                         String[] strings1 = new String[5];
//                         System.out.println("enter the another string array to check the equality");
//                         for (int i = 0; i < 5; i++)
//                     {
//                         strings1[i] = s.nextLine();
//                         System.out.println("enter");
                        
//                     }
//                     boolean bool = Arrays.equals(strings, strings1);
//                     if (bool)
//                         System.out.println("the content of the arrays are equal");
//                     else
//                         System.out.println("the contents of the arrays are not equal");
//                     break;
//                     case 5:
//                         System.out.println("you selected to fill the whole array with a particular element");
//                         System.out.println("enter the string you want to fill");
//                         String str1 = s.nextLine();
//                         Arrays.fill(strings, str1);
//                         break;
//                     case 6:
//                         System.out.println("you selected to fill a particular element from index-to index");
//                         System.out.println("enter the string you want to fill");
//                         String str2 = s.nextLine();
//                         System.out.println("enter the indices from index-to index to fill");
//                         int i4 = s.nextInt();
//                         int i5 = s.nextInt();
//                         Arrays.fill(strings, i4 + 1, i5+ 1, str2);
//                         break;
//                     case 7:
//                         System.out.println("the elements in the array is");
//                         System.out.println(Arrays.toString(strings));
//                         break;

//                 }
//             } else if (!(choice >= 1 && choice <= 8))
//                 System.out.println("enter the valid option to perform operation");
//             else{
//                 System.out.println("STOPPED");
//                 break;
//             }
//         }
//     }

//     public static void Choice() {
//         System.out.println("enter the choice");
//         System.out.println("1 for sorting");
//         System.out.println("2 for sorting from index-to index");
//         System.out.println("3 for searching");
//         System.out.println("4 for checking equality");
//         System.out.println("5 for filling");
//         System.out.println("6 for filling from index-to index");
//         System.out.println("7 for displaying");
//         System.out.println("8  to stop");
//     }
// }