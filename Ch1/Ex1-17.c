/**
 * This program fulfills Exercise 1-17.
 * Write a program to print all input lines that are longer than 80 characters.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define MAXLINE 1000

/**
 * This is the main method.
 */
int main() {
    char input[MAXLINE];
    int cur;
    int i;
    while ((cur = getchar()) != EOF) {
        if (cur != '\n') {
            input[i] = cur;
            i++;
        }
        else {
            if (i > 80) {
                printf("%s\n", input);
            }
            i = 0;
        }
    }
    return 0;
}
