/**
 * This program does stuff. File template description goes right about here.
 * So many descriptors. It truly never ends.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

/**
 * This is the main method.
 */
int main() {
    int a = 3;
    int b = 4;
    int c;
    c = (a>b) ? a : b; // if a>b, c = a, otherwise if a < b, c = b.
    printf("a: %d\nb: %d\n", a, b);
    printf("a>b ? a : b --> a=%d\n", c);
    c = (a<b) ? a : b; // if a>b, c = a, otherwise if a < b, c = b.
    printf("a: %d\nb: %d\n", a, b);
    printf("a<b ? a : b --> a=%d\n", c);
    return 0;
}
