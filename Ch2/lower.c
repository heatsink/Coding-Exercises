/**
 * Uppercase to Lowercase conversion. Does nothing if it's not uppercase.
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
        // Is character uppercase?
        if (cur >= 'A' && cur <= 'Z') {
            putchar(cur + 'a' - 'A');
        }
        else {
            putchar(cur);
        }
    }
    return 0;
}
