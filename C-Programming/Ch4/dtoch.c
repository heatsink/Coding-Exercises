/**
 * This program converts an integer into a string recursively.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
void dtoch(int integer);
void newLine(void);

/**
 * This is the main method.
 */
int main() {
    dtoch(42);     
    newLine();
    dtoch(11829);     
    newLine();
    dtoch(-42);     
    newLine();
    dtoch(0); 
    newLine();
    return 0;
}
void dtoch(int integer) {
    if (integer < 0) {
        putchar('-');
        integer*= -1;
    }
    if (integer > 10) {
        dtoch(integer/10);
    }
    putchar(integer % 10 + '0');
}
void newLine(void) {
    putchar('\n');
}
