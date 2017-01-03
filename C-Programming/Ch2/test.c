/**
 * This program does stuff. File template description goes right about here.
 * So many descriptors. It truly never ends.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>

/**
 * This is the main method.
 */
int main() {
    //int x = 77;
    int x = 0b10111011;
    //int x = 255;
    int count;
    for (count = 0; x != 0; x<<=1) {
        if (x & 0x80) {
            count++;
        }
    }
    printf("Count: %d\n", count);
    /*
    x = x & ~077;
    printf("%u\n", x);
    */
    return 0;
}
