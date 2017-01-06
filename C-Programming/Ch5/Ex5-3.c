/**
 * This program fulfils Exercise 5-3.
 * Write a pointer version of the function strcat that we showed in 
 * Chapter 2: strcat(s,t) copies the string t to the end of s.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define MAXLEN 1000
void stringcat(char *s, char *t);

/**
 * This is the main method.
 */
int main() {
    char s[MAXLEN];
    char t[] = "doggo doge doostuff";
    char z[] = " pew pew diggery doo";
    stringcat(s, t);
    printf("init + %s --> %s\n", t, s);
    stringcat(s, z);
    printf("init + %s --> %s\n", z, s);
    return 0;
}
/*
 * Assumes *s is long enough to fit *t.
 * Copies contents of t into end of s
 */
void stringcat(char *s, char *t) {
    // Find the last position of *s = '/0'
    while (*s) { // != '\0'
        s++;
    }
    // Copy t into s including null character '\-'
    while ((*s=*t)) {
        s++;
        t++;
    }
}
