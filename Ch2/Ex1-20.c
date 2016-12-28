/**
 * Write a program detab that replaces tabs in the input with the proper 
 * number of blanks to space to the next tab stop. Assume a fixed set of tab 
 * stops, say every n columns. Should n be a variable or a symbolic parameter?
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define TABSTOP 8
/**
 * This is the main method.
 */
int main() {
    // Continue getting input
    int cur;
    int i;
    int stop = 0;
    while ((cur = getchar()) != EOF && cur != '\0') {
        if (cur == '\t') {
            for (i = 0; i < TABSTOP - stop; i++) {
                putchar(' ');
            }
            i = 0;
            stop = 0;
        }
        else if (cur == '\n') {
            putchar('\n');
            stop = 0;
        }
        else {
            putchar(cur);
            stop++;
            if (stop == TABSTOP - 1) {
                stop = 0;
            }
        }
    }
    return 0;
}
