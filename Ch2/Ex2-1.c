/**
 * Write a program to determine the ranges of char, short, int, and long
 * variables, both signed and unsigned, by printing appropriate values from 
 * standard headers and by direct computation. Harder if you compute them: 
 * determine the ranges of the various floating-point types.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>

/**
 * This is the main method.
 */
int main() {
    // Signed
        // char
        printf("Signed char: [%d , ", -1*((unsigned char)~0 >> 1)- 1);
        printf("%d]\n", (unsigned char)~0 >> 1);
        // short
        printf("Signed short: [%d , ", -1*((unsigned short)~0 >> 1)- 1);
        printf("%d]\n", (unsigned short)~0 >> 1);
        // int
        printf("Signed int: [%d , ", -1*((unsigned int)~0 >> 1)- 1);
        printf("%d]\n", (unsigned int)~0 >> 1);
        // long
        printf("Signed long: [%lu , ", -1*((unsigned long)~0 >> 1)- 1);
        printf("%lu]\n", (unsigned long)~0 >> 1);
    // Unsigned
        // char
        printf("Unsigned char: [0, %d]\n", (unsigned char)~0);
        // short
        printf("Unsigned short: [0, %d]\n", (unsigned short)~0);
        // int
        printf("Unsigned int: [0, %u]\n", (unsigned int)~0);
        // long
        printf("Unsigned long: [0, %lu]\n", (unsigned long)~0);
    return 0;
}
