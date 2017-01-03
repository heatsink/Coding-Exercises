/**
 * This program fulfills Exercise 1-19.
 * Write a function reverse(s) that reverses the character string s. 
 * Use it to write a program that reverses its input a line at a time.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define MAXLINE 1000

void reverseString(char line[], int length);
/**
 * This is the main method.
 */
int main() {
    int cur;
    int i;
    char line[MAXLINE];
    // Continually read characters
    while ((cur = getchar()) != EOF) {
        // Read '\n' Indicates new line
        if (cur != '\n') {
            line[i] = cur;
            i++;
        }
        else { // Entire line read. Reverse string.
            line[i+1] = '\0';
            reverseString(line, i);
            i = 0;
        }
    }
    return 0;
}
void reverseString(char line[], int length) {
    int i;
    for (i = length - 1; i >=  0; i--) {
        putchar(line[i]);
    }
    putchar('\n');
}
