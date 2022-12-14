/*
– When overflow occurs during an operation on signed integers, the program’s behavior is
undefined
– When overflow occurs during an operation on unsigned integers, the result is defined: we
get the correct answer modulo 2n, where n is the number of bits used to store the result
*/

#include <stdio.h>

int main()
{
    signed int x = 2147483647; // it is the highest limit = (2^31)-1
    printf("Initially: %d\n", x);
    x = x + 12342345;
    printf("After addition, Overflow: %d\n", x);
    // The result is undefined, i dont know how???

    unsigned int y = 4294967295; // it is the highest limit = (2^32)-1
    printf("Initially: %u\n", y);
    y = y + 100;
    printf("After addition, Overflow: %u\n", y);
    // The result is said defined
    // The result will be = correct answer % 2^n [n = 32(total bits to store the value)]
    // result = 4294967295 + 100
    // = 4294967295 % 2^32
    // = 4294967295 % 4294967296
    // = 99 [GOT IT!!!]

    return 0;
}
