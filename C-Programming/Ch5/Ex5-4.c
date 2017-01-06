/**
 * This program fulfils Exercise 5-4.
 * Write the function strend(s,t), which returns 1 if the string t occurs at 
 * the end of the string s, and zero otherwise.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
int strend(char *s, char *t);

/**
 * This is the main method.
 */
int main() {
    char s[] = "  doggo";
    char t[] = "doggo";
    int test = strend(s, t);
    printf("test- %s & %s -res --> %d\n", s, t, test);
    char x[] = "  doggo";
    char y[] = "do ggo";
    int test2 = strend(x, y);
    printf("test- %s & %s -res --> %d\n", x, y, test2);
    return 0;
}
int strend(char *s, char *t) {
    int tLen = -1;
    // Count to end of *s
    while (*s++)
        ;
    // Count to end of *t
    while (*t++) {
        tLen++;
    }
    // Compare backwards!
    while (tLen > 0) {
        if (*--s != *--t) {
            return 0;
        }
        tLen--;
    }
    return 1;
}
