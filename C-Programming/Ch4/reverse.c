/**
 * This program reverses a string recursively.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>
void reverse(char string[], int index);
void testReverse(char a[], char b[]);
typedef int bool;
enum bool { false, true };

/**
 * This is the main method.
 */
int main() {
    char testa[] = "doggo";
    char testar[] = "oggod";
    testReverse(testa, testar);
    char chuck[] = "chucktesta";
    char tester[] = "atsetkcuhc";
    testReverse(chuck, tester);
    return 0;
}

void reverse(char string[], int index) {
    int temp;
    int j = strlen(string) - index - 1;
    if (index < j) {
        temp = string[index];
        string[index] = string[j];
        string[j] = temp;
        index++;
        reverse(string, index);
    }
}

void testReverse(char a[], char b[]) {
    bool success = true;
    int i;
    reverse(a, 0);
    for (i = 0; i < strlen(a) - 1; i++) {
        if (a[i] != b[i]) {
            printf("Collision.\n");
            printf("a[%d]=%d, b[%d]=%d.\n",i,a[i], i, b[i]);
            success = false;
        }
    }
    if (!success) {
        printf("Boo. String: %s != %s.\n", a, b);
    }
    else {
        printf("Hooray! String: %s == %s.\n", a, b);
    }
}
