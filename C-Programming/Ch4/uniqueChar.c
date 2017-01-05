/**
 * This program determines whether all characters in a string are unique
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>
#define CHARSET 255
typedef int bool;
enum bool { false, true };
bool stringUnique(char string[]);
void testFunct(char string[]);

/**
 * This is the main method.
 */
int main() {
    testFunct("dog");
    testFunct("doggo");

    return 0;
}
bool stringUnique(char string[]) {
    int test[CHARSET];
    int i;
    for (i = 0; i < strlen(string); i++) {
        if (test[string[i]]) {
            return false;
        }
        test[string[i]]++;
    }
    return true;
}
void testFunct(char string[]) {
    bool result = stringUnique(string);
    if (result) {
        printf("Boo. String: %s - Contains all unique characters!\n", string);
    }
    else {
        printf("Yay! String: %s - Contains duplicate characters.\n", string);
    }
}
