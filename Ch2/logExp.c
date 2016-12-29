/**
 * This program tests logical expressions.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>

/**
 * This is the main method.
 */
int main() {
    int res;
    int a;
    int b;
    a = 4;
    b = 7;
    res = a > 0 && b < 9;
    if (res == 1) {
        printf("Operation success: res=%d\n", res);
    }
    else {
        printf("Operation failure: res=%d\n", res);
    }

    return 0;
}
