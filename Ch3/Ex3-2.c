/**
 * This program fulfils Exercise 3-2.
 * Write a function escape(s,t) that converts characters like newline and tab
 * into visible escape sequences like \n and \t as it copies the string t to 
 * s. Use a switch. Write a function for the other direction as well, 
 * converting escape sequences into the real characters.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>
#define STRLEN 1000
void escape(char s[], char t[]); // Copies chars into escape sequences
void real(char s[], char t[]); // Copies escape sequences into real chars

/**
 * This is the main method.
 */
int main() {
    // Get Input
    // Output characters like newline and tab into visible esc. seq. \n, \t, etc.
    return 0;
}
void escape(char s[], char t[]) { // Copies good t to s
    int i;
    char temp;
    for (i = 0; i < strlen(t) - 1; i++) {
        temp = t[i];
        switch (temp) {
            case '\t':
                s[i++] = '\\';
                s[i] = 't';
            case '\b':
                s[i++] = '\\';
                s[i] = 'b';
            case '\n':
                s[i++] = '\\';
                s[i] = 'n';
            default: 
                s[i] = temp;
                break;
        }
    }
}
void real(char s[], char t[]) { // Copies good t to s
}
