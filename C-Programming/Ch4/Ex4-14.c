/**
 * This program fulfils Exercise 4-14.
 * Define a macro swap(t,x,y) that interchanges two arguments of type t. 
 * (Block structure will help.)
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define swap(t, x, y) {\
    t temp = x;\
    x = y;\
    y = temp;\
    }

/**
 * This is the main method.
 */
int main() {
    int x = 7;
    int y = 42;
    printf("Init Status: x = %d, y = %d\n", x, y);
    swap(int, x, y)
    printf("Final Status: x = %d, y = %d\n", x, y);
    return 0;
}
