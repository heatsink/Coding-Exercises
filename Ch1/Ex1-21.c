/**
 * This program fulfils Exercise 1-21
 * Write a program entab that replaces strings of blanks by the minimum number 
 * of tabs and blanks to achieve the same spacing. Use the same tab stops as 
 * for detab. When either a tab or a single blank would suffice to reach a tab 
 * stop, which should be given preference?
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define TABSTOP 4
/**
 * This is the main method.
 */
int main() {
    int cur;
    int count;
    count = 0;
    int i;
    while ((cur=getchar()) != EOF && cur != '\0') {
        if (cur == ' ') {
            count++;
        }
        else {
            for (i = 0; i < count; i++) {
                putchar(' ');
            }
            putchar(cur);
        }
        if (count == TABSTOP) {
            count = 0;
            putchar('\t');
        }
    }
    return 0;
}
