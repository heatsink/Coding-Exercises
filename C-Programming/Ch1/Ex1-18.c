/**
 * This program fulfills Exercise 1-18.
 * Write a program to remove trailing blanks and tabs from each line of input, 
 * and to delete entirely blank lines.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define MAXLINE 1000

/**
 * This is the main method.
 */
int main() {
    int cur;
    int i;
    char line[MAXLINE];
    // Continually read input
    while ((cur = getchar()) != EOF) {
        // Consider '\n' & Annihilate line if i == 0
        if (cur == '\n') {
            if (i != 0) {
                line[i] = '\0';
                printf("%s\n", line);
            }
            i = 0;
        }
        // Consider '\b' & Remove if it exists
        // Consider '\t' & Remove if it exists
        else if (cur != ' ' && cur != '\t') {
            // Get an entire line & increment i
            line[i] = cur;
            i++;
        }
    }
    return 0;
}
