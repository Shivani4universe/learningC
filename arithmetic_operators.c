/* Author: Shivani Mishra
Date: 2019.10.02
Description:
Takes input from the user and performs some artithmetic operations
*/

#include <stdio.h>
#include <math.h>

void main ()
{
  int a, b, s, m, e, mod;
  float d;
  printf ("Enter two numbers- \n");
  scanf ("%d %d", &a, &b);

  s = a + b;
  m = a * b;
  d = (float) a / b;
  e = pow (a, b);
  mod = a % b;


  printf ("The summation of %d and %d is %d\n", a, b, s);
  printf ("The multiplication of %d and %d is %d\n", a, b, m);
  printf ("The division of %d and %d is %f\n", a, b, d);
  printf ("%d exponent %d is %d\n", a, b, e);
  printf ("%d mod %d is %d\n", a, b, mod);
}
