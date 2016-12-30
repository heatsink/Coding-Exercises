/**
 * This program fulfils Exercise 2-10.
 * Rewrite the function lower, which converts upper case letters to lower case,
 * with a conditional expression instead of if-else.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>

/**
 * This is the main method.
 */
int main() {
    // Continually get input
    int cur;
    while ((cur=getchar()) != EOF && cur != '\0') {
        putchar((cur >= 'A' && cur <= 'Z') ? cur - 'A' + 'a': cur);
    }
    return 0;
}
