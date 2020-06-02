/* Author: Shivani Mishra
Date: 2019-10-6
Description:
Unions in C
*/
 #include <stdio.h>
 #include <string.h>

 //Unions use less memory than Structures
 union Food
 {
     char FoodItem[50];
     int Price;
 };

 void main()
 {
     union Food C;

     strcpy(C.FoodItem, "Chocolate Pastry");
     printf("Food Item: %s\n", C.FoodItem);

     C.Price = 50;
     printf("Price: %d\n", C.Price);
 }
