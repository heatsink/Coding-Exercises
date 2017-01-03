/**
 * This program is a little intellectual test for goto in c.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define TEST_RANGE 100
#define TEST_ERROR 75

/**
 * This is the main method.
 */
int main() {
    int i;
    for (i = 0; i < TEST_RANGE; i++) {
        printf("num: %d\n", i);
        if (i > TEST_ERROR) {
            goto oddDisaster;
        }
    }
oddDisaster:
    printf("What a disaster! We have reached over %d!\n", TEST_ERROR);
    return 0;
}
