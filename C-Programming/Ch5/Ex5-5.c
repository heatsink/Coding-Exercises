/**
 * This program fulfils Exercise 5-5.
 * Write versions of the library functions strncpy, strncat, and strncmp, which 
 * operate on at most the first n characters of their argument strings. For
 * example, strncpy(s,t,n) copies at most n characters of t to s. Full 
 * descriptions are in Appendix B.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define MAXLEN 1000
void stringcpy(char *s, char *t, int n);
int stringcmp(char *s, char *t, int n);
void stringcat(char *s, char *t, int n);

/**
 * This is the main method.
 */
int main() {
    //Test stringcpy
    char s[MAXLEN];
    char t[] = "doggo";
    printf("-test stringcpy-%s'\\0', %s'\\0'\n", s, t);
    stringcpy(s, t, 3);
    printf("-output-%s'\\0'\n\n", s);

    //Test stringcmp
    char a[] = "abcz";
    char b[] = "abcd";
    printf("-test %d stringcmp-%s'\\0', %s'\\0'\n", 3, a, b);
    int test = stringcmp(a, b, 3);
    printf("-output-num:%i\n\n", test);

    char _a[] = "zbcz";
    char _b[] = "abcd";
    printf("-test %d stringcmp-%s'\\0', %s'\\0'\n", 3, _a, _b);
    test = stringcmp(_a, _b, 3);
    printf("-output-num:%i\n\n", test);

    char __a[] = "abcz";
    char __b[] = "zbcd";
    printf("-test %d stringcmp-%s'\\0', %s'\\0'\n", 3, __a, __b);
    test = stringcmp(__a, __b, 3);
    printf("-output-num:%i\n\n", test);

    //Test stringcat
    char x[] = "trololololololololololol";
    char y[] = "professionalstuff";
    printf("-test stringcat-%s'\\0', %s'\\0'\n", x, y);
    stringcpy(x, y, 12);
    printf("-output-%s'\\0'\n\n", x);

     
    return 0;
}
/*
 * Copies a maximum of the first n characters of *t into *s
 */
void stringcpy(char *s, char *t, int n) {
    // Go to the end of *s
    while (n-- > 0 && *t) {
        *s++=*t++;
    }
}

/*
 * Compares a maximum of the first n characters of *t to *s
 * Standard comparator. EQ --> 0, S > t --> > -1, S < T --> 1
 */
int stringcmp(char *s, char *t, int n) {
    while (n-- > 0) {
        if (*s++ == *t++) {
            continue;
        }
        return *--s - *--t;
    }
    return 0;
}

/*
 * Concatenates a max of the first n characters of *t into the end of *s
 */
void stringcat(char *s, char *t, int n) {
    // Go to the end of *s
    while (*s) {
        s++;
    }
    while (n-- > 0 && *t) {
        *s++=*t++;
    }

}
