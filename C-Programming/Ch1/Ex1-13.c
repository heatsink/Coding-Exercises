// Write a program to print a histogram of the lengths of words in its input. It is easy to draw the
//histogram with the bars horizontal; a vertical orientation is more challenging.
#include <stdio.h>
int main() {
    int cur;
    int wLen;
    int count;
    while (cur != EOF) {
        cur = getchar();
        wLen = 0;
        while (cur != '\t' && cur != ' ' && cur != '\n' && cur != EOF) {
            cur = getchar();
            wLen++; 
        }
        count = 1;
        for (count; count <= wLen; count++) {
            putchar('-');
        } 
        putchar('\n');
    }
    return 0;
}
