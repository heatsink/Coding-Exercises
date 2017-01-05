/**
 * This program is a test bench for my stack.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include "stack.h"

/**
 * This is the main method.
 */
int main() {
    push('a');
    push('b');
    push('c');
    push('d');
    push('e');
    push('f');
    char test;
    test = pop();
    printf("test: %c\n", test);
    test = pop();
    printf("test: %c\n", test);
    test = pop();
    printf("test: %c\n", test);
    test = pop();
    printf("test: %c\n", test);
    test = pop();
    printf("test: %c\n", test);
    test = pop();
    printf("test: %c\n", test);
     
    return 0;
}
