/**
 * For example, this loop prints n elements
 * of an array, 10 per line, with each column separated by one blank, and with 
 * each line (including the last) terminated by a newline.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>

/**
 * This is the main method.
 */
int main() {
    int array[100];
    int i;
    // Create Array
    for (i = 0; i < 100; i++) {
        array[i] = i;
    }
    // Print Array
    for (i = 0; i < 100; i++) {
        printf("array[%d]=%d%c\n", i, array[i], (i%2==0) ? ' ' : 'x');
    }
    // Cool conditionals
    int n;
    n = 100;
    for (i = 0; i < n; i++)
        printf("%6d%c", array[i], (i%10==9 || i==n-1) ? '\n' : ' ');
    return 0;
}
