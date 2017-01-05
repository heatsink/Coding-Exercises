/**
 * This program fulfils Exercise 5-1.
 * As written, getint treats a + or - not followed by a digit as a valid 
 * representation of zero. Fix it to push such a character back on the input.
 * getch and ungetch operations are given, as is the original unmodified program.
 * @author Sean Wallace
 * @version 1
 */

/* 
 * Technically all of getch & ungetch should be under its own header
 */
#include <stdio.h>
#include <ctype.h>
#define BUFFSIZE 100
int getch(void);
char buf[BUFFSIZE];
int bufp = 0;

int getch(void) {
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c) {
    if (bufp >= BUFFSIZE) {
        printf("Error - ungetch: characters exceed BUFFSIZE.\n");
    }
    else {
        buf[bufp++] = c;
    }
}

/*
 * Main program.
 */
int main() {
    int getint(int *pVal);
    //int x;
    //int *pVal = &x;
    int *pVal;
    getint(pVal);
    printf("*pVal: %d\n", *pVal);
    return 0;
}

/*
 * Finds the next int in input
 */
int getint(int *pVal) {
    int cur, sign;
    while (isspace(cur = getch())) /* skip the white space */
        ;
    if (!isdigit(cur) && cur != EOF && cur != '+' && cur != '-') {
        ungetch(cur);
        printf("Error - %c input NaN.\n", cur);
        return 0;
    }
    sign = (cur == '-') ? -1 : 1;
    if (cur == '-' || cur == '+') {
        cur = getch();
        if (!isdigit(cur)) { /* push back on the input */
            ungetch((sign == -1) ? '-' : '+');
            return 0;
        }
    }
    for (*pVal = 0; isdigit(cur); cur = getch()) {
        *pVal = *pVal * 10 + (cur - '0');
    }
    *pVal *= sign;
    if (cur != EOF) {
        ungetch(cur);
    }
    return 0;
}
