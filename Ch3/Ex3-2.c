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
    char input[STRLEN];
    char output[STRLEN];
    int index;
    int cur;
    while ((cur = getchar()) != EOF && cur != '\0') {
        // Wait for new line
        input[index++] = cur;
        if (cur == '\n') {
            input[index++] = cur;
            escape(output, input);
            printf("%s\n", output);
            input[index] = '\0';
            index = 0;
        }
    }
    // Output characters like newline and tab into visible esc. seq. \n, \t, etc.
    return 0;
}
void escape(char s[], char t[]) { // Copies good t to s
    int i = 0;
    int j = 0;
    char temp;
    for (i = 0; i < strlen(t) - 1; i++) {
        temp = t[i];
        switch (temp) {
            case '\t':
                s[j++] = '\\';
                s[j] = 't';
                break;
            case '\b':
                s[j++] = '\\';
                s[j] = 'b';
                break;
            case '\n':
                s[j++] = '\\';
                s[j] = 'n';
                break;
            case '\r':
                s[j++] = '\\';
                s[j] = 'r';
            default: 
                s[j] = temp;
                break;
        }
        j++;
    }
    s[j] = '\0';
}
void real(char s[], char t[]) { // Copies good t to s
}
