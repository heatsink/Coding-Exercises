//Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
#include <stdio.h>
int main() {
    int cur;
    while (cur != EOF) {
        cur = getchar();
        if (cur == ' ') {
            putchar(' ');
            while (cur != EOF && cur == ' ') {
                cur = getchar(); 
            }
            putchar(cur);
        }
        else {
            putchar(cur);
        }
    }
    return 0;
}
