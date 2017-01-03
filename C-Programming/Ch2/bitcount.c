/**
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>

/**
 * This is the main method.
 */
int main() {
    int bin = 0b11001100; 
    int count;
    for (count = 0; bin != 0; bin &= (bin-1)) {
        count++;
    }
    printf("Count : %u\n", count);
    return 0;
}
