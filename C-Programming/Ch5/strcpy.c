/**
 * This program is a basic stringcpy using pointers.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define MAXLEN 1000
void stringcpy(char *s1, char *s2);

/**
 * This is the main method.
 */
int main() {
    char s1[MAXLEN];
    char s2[] = "dawg";
    stringcpy(s1, s2);
    printf("s1: %s\n", s1);
    return 0;
}
/*
 * Copies the contents of s2 into s1
 */
/*
void stringcpy(char *s1, char *s2) {
    while ((*s1 = *s2)!= '\0') {
        s1++;
        s2++;
    }
}
*/

/*
 * Because now the book showed me the cool version. :D.
 */
void stringcpy(char *s1, char *s2) {
    while ((*s1++ = *s2++)) // Because here while still checks for !=0 inherently
        ;
}
