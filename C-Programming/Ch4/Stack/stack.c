/**
 * This program is a basic stack used to mimic OOP in C.
 * @author Sean Wallace
 * @version 1
 */
#include "stack.h"
#define STACKLEN 1000
int stackPointer = 0;
char stack[STACKLEN];

void push(char item) {
    stack[stackPointer] = item;
    stackPointer++;
}
int pop(void) {
    stackPointer--;
    return stack[stackPointer];
}
int top(void) {
    return stack[stackPointer];
}
