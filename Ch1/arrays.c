// write a program to count the number of occurrences of each digit, of white space characters (blank, tab,
//newline), and of all other characters. This is artificial, but it permits us to illustrate several aspects of C in one
//program.
#include <stdio.h>
#define NUMBER_SYSTEM 10
int main() {
    int digits[NUMBER_SYSTEM];
    int blanks;
    int tabs;
    int current;
    // Initialize digits array to 0
    int i = 0;
    for (i; i < NUMBER_SYSTEM; i++) {
        digits[i] = 0;
    }
    while (current != EOF) {
        current = getchar();
        // Is this a digit?
        if (current >= '0' && current <= '9') {
            digits[current-'0']++;
        }
        // Is this a blank?
        if (current == ' ') {
            blanks++;
        }
        // Is this a tab?
        if (current == '\t') {
            tabs++;
        }
    }
    // Count complete. Print count.
    printf("%d Blanks\n%d Tabs\n", blanks, tabs);
    for (i = 0; i < NUMBER_SYSTEM; i++) {
        printf("array[%d]: %d\n", i, digits[i]);
    }
    return 0;
}
