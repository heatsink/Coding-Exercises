/**
 * It's a standard atoi. Convert string to integer.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>

/**
 * This is the main method.
 */
int main() {
    char string[] = "10294";
    int i;
    int n;
    for (i = 0; i < strlen(string); i++) {
        n = 10*n + string[i] - '0';
    }
    printf("Converting string: %s\n", string);
    printf("Converted integer: %d\n", n);

    return 0;
}
