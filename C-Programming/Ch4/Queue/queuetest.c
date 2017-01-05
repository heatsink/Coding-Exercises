/**
 * The main testing area for my queue
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include "queue.h"

/**
 * This is the main method.
 */
int main() {
    int i;
    for (i = 0; i < 11; i++) {
        enqueue(i);
    }
    int release;
    for (i = 0; i < 10; i++) {
        release = dequeue();
        printf("dequque: %d\n", release);
    }
    return 0;
}
