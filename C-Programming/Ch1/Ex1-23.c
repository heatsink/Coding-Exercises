/**
 * This program fulfills Exercise 1-23
 * Write a program to remove all comments from a C program. Don't forget to 
 * handle quoted strings and character constants properly. C comments don't nest.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define TARGET 4

/**
 * This is the main method.
 */
int main() {
    // Continually recieve input
    int cur;
    int previous;
    int state;
    state = 0;
    previous = 0;
    while ((cur=getchar()) != EOF && cur!='\0') {
        previous = cur;
        if (cur != '/') {
            putchar(cur);
        }
        else {
            if ((cur=getchar()) != EOF && cur == '/') {
                if (previous != '/' && previous != '\'' && previous != '\"') {
                    //printf("Source 2\n");
                    //printf("Previous: %c\n", previous);
                    putchar(cur);
                }
            }
        }
    }
    return 0;
}
