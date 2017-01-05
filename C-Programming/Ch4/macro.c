/**
 * A small test for macros in C.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define square(x) (x)*(x)

/**
 * This is the main method.
 */
int main() {
    int test = square(4);
    printf("%d squared = %d\n", 4, test);
    int test2 = square(4+1);
    printf("%d squared = %d\n", 4+1, test2);
         
    return 0;
}
