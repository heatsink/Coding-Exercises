/**
 * This program fulfils Exercise 2-6.
 * Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
 * position p set to the rightmost n bits of y, leaving the other bits unchanged.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
unsigned getbits(unsigned x, int p, int n);
/**
 * This is the main method.
 */
int main() {
    unsigned int test = 255;
    printf("test(%u)-->%u\n", test, getbits(test, 4, 3));
    printf("test(%u)-->%u\n", test, getbits(test, 4, 4));
    printf("test(%u)-->%u\n", test, getbits(test, 8, 8));
    printf("test(%u)-->%u\n", test, getbits(test, 8, 7));
    printf("test(%u)-->%u\n", test, getbits(test, 7, 7));
    printf("%lu\n", ~(0xFFFFFFFFFFFFFFFF));
    printf("%lu\n", ~(0x0000000000000000));
    return 0;
}
/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p-n)) & ~(~0 << n);
}
