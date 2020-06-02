/* Author: Shivani Mishra
Date: 2019.10.5
Description:
limits.h header file
a variable cannot store values more than the limits shown in output
*/


#include <stdio.h>
#include <limits.h>
int main()
{
    printf(": %d\n", CHAR_BIT); //8
    printf(": %d\n", SCHAR_MIN); //-128
    printf(": %d\n", SCHAR_MAX); //127
    printf(": %d\n", INT_MIN); //-2147483648
    printf(": %d\n", INT_MAX); //2147483647
    return 0;
}
