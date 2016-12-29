/**
 * Currently not working. Pushed because these are my solo exercises for backup.
 * This program fulfils Exercise 2-4.
 * Write an alternative version of squeeze(s1,s2) that deletes each character 
 * in s1 that matches any character in the string s2.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>
typedef int bool;
enum bool { false, true };
void squeeze(char s1[], char s2[]);
void testSqueeze(char s1[], char s2[], char expect[]);
bool contains(char arr[], char c);
void testContains(char s1[], char c);
void removeCharacter(char s1[], int index);


/**
 * This is the main method.
 */
int main() {
    char s1[] = "abcdefgh";
    char s2[] = "def";
    char c = 'd';
    testContains("abcdefgh", 'c');
    testContains("abcdefgh", 'x');
    testContains("abcdefgh", '\0');
    testSqueeze("abcdefgh", "def", "abcgh");
}

void squeeze(char s1[], char s2[]) {
    char final[strlen(s1)];
    int i;
    int j;
    int k;
    i=j=k=0;
    while (s1[i] != '\0') {
        if (!contains(s2, s1[i])) {
            final[j] = s1[i];
            j++;
        }
        i++;
    }
    // make s1 = final
    strcpy(s1, final);
}

void testSqueeze(char s1[], char s2[], char expect[]) {
    squeeze(s1, s2);
    if (strcmp(s1, expect)) {
        printf("Squeeze test-- %s, %s --> %s -- Test Successful!\n", 
                s1, s2, expect);
    }
    else {
        printf("Squeeze test-- %s, %s --> %s -- Test Successful!\n", 
                s1, s2, expect);
    }

}

bool contains(char arr[], char c) {
    int i;
    for (i = 0; i < strlen(arr); i++) {
        if (arr[i] == c) {
            return true;
        }
    }
    return false;
}

void testContains(char s1[], char c) {
    if(contains(s1, c)) {
        printf("test-- char[] %s contains %c!\n", s1, c);
    }
    else {
        printf("test-- char[] %s invalid %c!\n", s1, c);
    }
}
