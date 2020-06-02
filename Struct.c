/* Author: Shivani Mishra
Date: 2019-10-6
Description:
Structure in C
*/
 #include <stdio.h>
 #include <string.h>

     //Structure can be used to store different data types
     struct Library
     {
         char BookName[50];
         char Author[50];
         char Availability[50];
     };

     void main()
     {
         struct Library C;

         //Initialization
         strcpy(C.BookName, "The Curious Incident of the dog in night time");
         strcpy(C.Author, "Mark Haddon");
         strcpy(C.Availability, "Available");

         //Print
         printf("Book Name: %s\n", C.BookName);
         printf("Book Author: %s\n", C.Author);
         printf("Availability: %s\n", C.Availability);
     }
