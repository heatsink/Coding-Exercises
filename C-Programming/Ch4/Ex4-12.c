/**
 * This program fulfils Exercise 4-12.
 * Adapt the ideas of printd to write a recursive version of itoa; that is, 
 * convert an integer into a string by calling a recursive routine.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
void itoa(int number);

/**
 * This is the main method.
 */
int main() {
    itoa(42);
    putchar('\n');
    itoa(-42);
    putchar('\n');
    itoa(65000);
    putchar('\n');
    itoa(-65000);
    putchar('\n');
    itoa(65535);
    putchar('\n');
     
    return 0;
}

/*
 * Sends ASCII output using integer input
 */
void itoa(int number) {
    if (number < 0) {
        number*= -1;
        putchar('-');
    }
    if (number > 0) { // Continue Recursion
        itoa(number/10);
        putchar(number % 10 + '0');
    }
}
