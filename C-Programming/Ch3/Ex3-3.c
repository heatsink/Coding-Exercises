/**
 * This program fulfils Exercise 3-3.
 * Write a function expand(s1,s2) that expands shorthand notations like a-z
 * in the string s1 into the equivalent complete list abc...xyz in s2. Allow 
 * for letters of either case and digits, and be prepared to handle cases like 
 * a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken
 * literally.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>
#define STRLEN 2000
void expand(char s1[], char s2[]);

/**
 * This is the main method.
 */
int main() {
    char s1[STRLEN];
    char s2[STRLEN];
    strcpy(s1, "-abcdefgh-");
    expand(s1, s2);
    printf("***test--->\"%s\"\n%s\n", s1, s2);
    strcpy(s1, "-a-zabcdefgha-za-b-ca-z0-9");
    expand(s1, s2);
    printf("***test--->\"%s\"\n%s\n", s1, s2);
    strcpy(s1, "-abcdefgh-");
    expand(s1, s2);
    printf("***test--->\"%s\"\n%s\n", s1, s2);
    return 0;
}
void expand(char s1[], char s2[]) {
    int i;
    int j;
    int state = 0; // 0 no loop, 1 loop
    char previous = 1;
    for (i = 0; i < strlen(s1); i++) {
        switch (s1[i]) {
            case '-' :
                state = 1;
                if (i == strlen(s1) - 1) {
                    // Check all the way right edge case
                    while (previous < 127) { // Since we are done after this
                            previous++;
                            s2[j] = previous;
                            j++;
                        }
                    s2[j] = '\0';
                    state = 0;
                }
                // Check all the way left edge case
                else if (i == 0) {
                    previous = 31;
                    while (previous < s1[i]) {
                        s2[j] = previous;
                        j++;
                        previous++;
                    }
                    state = 1;
                }
                break;
            default:
                if (state && previous !=0) { // != 0
                    // Continue as normal
                    while (previous <= s1[i]) {
                        s2[j] = previous;
                        j++;
                        previous++;
                    }
                    state = 0;
                }
                else if (i == strlen(s1) - 1) {
                    s2[j] = '\0';
                }
                else {
                    s2[j] = s1[i];
                    j++;
                }
                previous = s1[i]; // Could be optimized
                break;
        }
    }
}
