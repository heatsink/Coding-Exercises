/**
 * A basic queue in C.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include "queue.h"
#define CAPACITY 10
int queue[CAPACITY];
int front = -1;
int back = -1;
int count = 0;
/**
 * Enqueue
 */
void enqueue(int item) {
    if (count >= CAPACITY) {
        printf("Error: Overwrite - Queue has reached maximum capacity of %d\n", CAPACITY);
    }
    queue[(++front)%CAPACITY] = item;
    count++;
}

/**
 * Dequeue
 */
int dequeue(void) {
    return queue[(++back)%CAPACITY];
    count--;
}
