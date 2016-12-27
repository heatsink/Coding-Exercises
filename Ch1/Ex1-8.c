// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
// This program counts blanks, tabs, and newlines
#include <stdio.h>
int main() {
    int cur;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;
    while (cur != EOF) {
        cur = getchar();
        if (cur == ' ') {
            blanks++;
        } 
        if (cur == '\t') {
            tabs++;
        }
        if (cur == '\n') {
            newlines++;
        }
    }
    printf("EOF Detected. Exiting program.\n");
    printf("%d Blanks counted.\n", blanks);
    printf("%d Tabs counted.\n", tabs);
    printf("%d newlines counted.\n", newlines);
    
    return 0;
}
