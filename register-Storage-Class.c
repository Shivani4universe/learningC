/* Author: Shivani Mishra
Date: 2019.10.3
Description:
register Storage Class
*/

#include <stdio.h>
void main() {

  register int counter;
  for(register int counter=0; counter<+10; counter++)
  {
      printf("%d\n", counter);
  }
   return;

}
