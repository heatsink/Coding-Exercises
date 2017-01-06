/**
 * This program computes the length of a string using pointer subtraction.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>

/**
 * This is the main method.
 */
int main() {
    int stringlen(char *string);
    char string[] = "Dawg";
    int test = stringlen(string);
    printf("length of %s --> %d\n", string, test);
     
    return 0;
}
int stringlen(char *string) {
    char *pointer = string;
    while (*pointer != '\0') {
        pointer++;
    }
    return pointer - string;
}
