/**
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
void swap(int *pa, int *pb);

/**
 * This is the main method.
 */
int main() {
    int a;
    int b;
    a = 42;
    b = 7;
    printf("a -> %2d, b -> %2d\n", a, b);
    swap(&a, &b);
    printf("a -> %2d, b -> %2d\n", a, b);
     
    return 0;
}
void swap(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}
