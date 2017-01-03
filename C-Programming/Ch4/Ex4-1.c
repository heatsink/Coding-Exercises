/**
 * This program fulfils Exercise 4-1.
 * Write the function strindex(s,t) which returns the position of the rightmost 
 * occurrence of t in s, or -1 if there is none.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>
#define MAXLEN 1000
int strindex(char s[], char t[]);

/**
 * This is the main method.
 * Contains some test cases.
 */
int main() {
    char s[] = "this cool is some cool text cool";
    char t[] = "cool";
    int index;
    index = strindex(s, t);
    printf("String \"%s\" in String \"%s\"\nSearch results: %i\n", t, s, index);
    char x[] = "what what there is nothing here though";
    char z[] = "bananas";
    index = strindex(x, z);
    printf("String \"%s\" in String \"%s\"\nSearch results: %i\n", x, z, index);
    return 0;
}

/*
 * Returns the position of the rightmost occurence of t in s, or -1 if none
 * @param char s[], the line to be searched
 * @param char t[], the phrase to be searched for
 */
int strindex(char s[], char t[]) {
    int i, j, k;
    int max = -1;
    for (i = 0; s[i] != '\0' && i < strlen(s) - 1; i++) {
        for (j = i, k = 0; s[j] == t[k] && t[k] != '\0'; j++, k++, i++);
        if (k == strlen(t) && j >= max) {
            max = j-strlen(t);
        }
    }
    if (max != -1) {
        return max;
    }
    return max;
}
