/**
 * strlen test
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>

/**
 * This is the main method.
 */
int main() {
    char array[1000];
    int i;
    for (i = 0; i < 100; i++) {
        array[i]=7;
    }
    printf("strlen(array)=%lu\n", strlen(array));
    return 0;
}
