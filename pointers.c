/* Author: Shivani Mishra
Date: 2019-10-6
Description:
Pointers
*/
 #include <stdio.h>
 int main()
 {
     int n, *pntr;
     pntr = &n;
     printf("Address of n variable is: %d\n", &n); //6356728
     printf("Address stored in the pointer variable: %d\n, pntr"); //6356728
     return 0;
 }
