/**
 * This program computes the length of a string using a pointer!
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>

/**
 * This is the main method.
 */
int main() {
    int stringlen(char *string);
    char str[] = "doggo";
    char str2[] = "doggorydoo";
    int test = stringlen(str);
    printf("%s has a len of %d.\n", str, test);
    test = stringlen(str2);
    printf("%s has a len of %d.\n", str2, test);
     
    return 0;
}
int stringlen(char *string) {
    int len = 0;
    while (*string != '\0') {
        len++;
        string++;
    }
    return len;
}
