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
    char s1[9] = "abcdefgh";
    char s2[4] = "def";
    char c = 'd';
    testContains("abcdefgh", 'c');
    testContains("abcdefgh", 'x');
    testContains("abcdefgh", '\0');
    testSqueeze(s1, s2, "abcgh");
    char s3[] = "12345678901234567890";
    char s4[] = "0";
    testSqueeze(s3, s4, "123456789123456789");
}

void squeeze(char s1[], char s2[]) {
    int i;
    int j;
    int k;
    i=j=k=0;
    char temp[strlen(s1)];
    while (s1[i] != '\0') {
        if (!contains(s2, s1[i])) {
            temp[j++] = s1[i];
        }
        i++;
    }
    temp[j] = '\0';
    for (i = 0; i < strlen(temp); i++) {
        s1[i] = temp[i];
    }
    s1[i] = '\0';

}

void testSqueeze(char s1[], char s2[], char expect[]) {
    printf("Squeeze test-- %s, %s\n", s1, s2);
    squeeze(s1, s2);
    if (!strcmp(s1, expect)) { // If they are equal == 0
        printf("\t-->%s (cmp) %s-- Test Successful!\n", s1, expect);
    }
    else {
        printf("\t-->%s (cmp) %s-- Test unsuccessful.\n", s1, expect);
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
